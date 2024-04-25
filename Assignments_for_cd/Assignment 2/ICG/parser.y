%{
	#include "quad_generation.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h> 

	#define YYSTYPE char*

	void yyerror(char* s); // error handling function
	int yylex(); 	// declare the function performing lexical analysis
	extern int yylineno; // track the line number
	int yydebug = 1;
	FILE* icg_quad_file;
	int temp_no = 1;
	char *do_start_label;
%}


%token T_ID T_NUM T_IF T_ELSE T_DO T_WHILE GTEQ LTEQ EQQ NEQ GT LT OC CC
 
/* specify start symbol */
%start START

%nonassoc T_IF
%nonassoc T_ELSE
%nonassoc T_DO
%nonassoc T_WHILE

%%
START : S { 
		printf("Valid syntax\n");
		YYACCEPT;
	};
	 			
	

/* Grammar for assignment */
ASSGN : T_ID '=' E	{		
			
				quad_code_gen($1, $3, "=", "NULL");			
			
			}
	;

/* Expression Grammar */
E : E '+' T 	{	
			
			$$ = new_temp();
			quad_code_gen($$, $1, "+", $3);
		}
	| E '-' T 	{	
	
				$$ = new_temp();
				quad_code_gen($$, $1, "-", $3);
			}
	| T
	;
	
	
T : T '*' F 	{	
			$$ = new_temp();
			quad_code_gen($$, $1, "*", $3);
		}
	| T '/' F 	{		
	
	
				$$ = new_temp();
				quad_code_gen($$, $1, "/", $3);
			}
	| F
	;

F : '(' E ')' 	{		

			$$=strdup($2);
		}
	| T_ID 		{		
					$$=strdup($1);
				}
	| T_NUM 	{		
				$$=strdup($1);
			}
	;
	

S : T_IF '('C')' OC S CC {quad_code_gen($3,"","Label","");} S 
       | T_IF '('C')' OC S CC {
       			$2 = new_label();
		 		quad_code_gen($2,"","goto","");		
			 	quad_code_gen($3,"","Label","");} T_ELSE OC S CC {quad_code_gen($2,"","Label","");}S
		| T_DO {do_start_label = new_label();
			quad_code_gen(do_start_label, "", "Label", "");}OC S CC T_WHILE '(' C_DO ')' S
       | ASSGN ';' S 
       |'{'S'}' S
       | 
       ;

C : E rel E  {	$$ = new_temp();
		quad_code_gen($$, $1, $2, $3);
		$1 = new_label();
		quad_code_gen($1,$$,"if","");	
		$$ = new_label();
		quad_code_gen($$,"","goto","");
		quad_code_gen($1,"","Label","");	
			
		};
C_DO : E rel E  {	$$ = new_temp();
		quad_code_gen($$, $1, $2, $3);
		quad_code_gen(do_start_label,$$,"if","");	
		$$ = new_label();
		quad_code_gen($$,"","goto","");
		// $1 = new_label();
		quad_code_gen($$,"","Label","");	
		};






rel :  GT {strcpy($$,">");}
     | LT {strcpy($$,"<");}
     | LTEQ {strcpy($$,"<=");}
     | GTEQ {strcpy($$,">=");}
     | EQQ {strcpy($$,"==");}
     | NEQ {strcpy($$,"!=");}
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
	icg_quad_file = fopen("icg.txt","w");
	quad_code_heading();
	yyparse();
	fclose(icg_quad_file);
	return 0;
}
