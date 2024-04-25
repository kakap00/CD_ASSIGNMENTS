%{
	#include "abstract_syntax_tree.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	void yyerror(char* s); 											 
	int yylex(); 												
	extern int yylineno; 											%}
// union to allow nodes to have return different datatypes
%union																
{
	char* text;
	expression_node* exp_node;
}
%token <text> T_ID T_NUM IF ELSE DO WHILE 
%type <text> RELOP
%type <exp_node> E T F START ASSGN S C SEQUENCE 

/* specify start symbol */
%start START
%%
START : SEQUENCE {
	display_exp_tree($1);
	printf("\nValid syntax\n");
	YYACCEPT;
};

SEQUENCE : SEQUENCE S { $$ = init_exp_node("SEQUENCE", $1, $2);}
	| S  {$$ = $1;}
;

S : IF '(' C ')' '{' SEQUENCE '}' {
		$$ = init_exp_node("SEQUENCE",init_exp_node(strdup("if"), $3, $6),NULL);
	}
	| IF '(' C ')' '{' SEQUENCE '}' ELSE '{' SEQUENCE '}'  {
		$$ = init_exp_node("SEQUENCE", init_exp_node(strdup("If"),$3,$6), init_exp_node(strdup("Else"),$10,NULL));
	}
	| DO '{' SEQUENCE '}' WHILE '(' C ')'{
		$$ = init_exp_node("SEQUENCE",init_exp_node(strdup("Do"),$3,NULL),init_exp_node(strdup("While"),$7,NULL));
	}
	| ASSGN ';' { $$ = $1;}
;

C : F RELOP F {
	$$=init_exp_node(strdup($2), $1, $3);
}
;

RELOP : '<' { $$ = "<";}
	   | '>' { $$ = ">";}
	   | '>''=' { $$ = ">=";}
	   | '<''=' { $$ = "<=";} 
	   | '=''=' { $$ = "==";}
	   | '!''=' { $$ = "!=";}
;




ASSGN : T_ID '=' E	{$$=init_exp_node(strdup("="),init_exp_node($1,NULL,NULL),$3);}
	;
E : E '+' T 	{$$=init_exp_node(strdup("+"),$1,$3);}
| E '-' T 		{$$=init_exp_node(strdup("-"),$1,$3);}
   | T 			{$$=$1;}
   ;
T : T '*' F 	{$$=init_exp_node(strdup("*"),$1,$3);}
   | T '/' F 	{$$=init_exp_node(strdup("/"),$1,$3);}
   | F 			{$$=$1;}
   ;
F : '(' E ')' 	{$$=$2;}
	| T_ID 		{$$=init_exp_node($1,NULL,NULL);}
	| T_NUM 	{$$=init_exp_node($1,NULL,NULL);}
	;


%%


/* error handling function */
void yyerror(char* s)
{
	printf("Error :%s at %d \n",s,yylineno);
}


/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	yyparse();
	return 0;
}