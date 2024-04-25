#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quad_generation.h"

void quad_code_heading(){
	fprintf(icg_quad_file,"| %-10s | %-10s | %-10s | %-10s |\n","Operator","Argument 1","Argument 2","Result");
}

void quad_code_gen(char* a, char* b, char* op, char* c)
{
	//use fprintf to output the quadruple code to icg_quad_file.txt
	fprintf(icg_quad_file,"| %-10s | %-10s | %-10s | %-10s |\n",op,b,c,a);
}

char* new_temp()	//returns a pointer to a new temporary
{
	char* temp=(char* )malloc(sizeof(char)*4);
	sprintf(temp,"t%d",temp_no);
	++temp_no;
	return temp;
}

char* new_label()
{
    // char label[10];
	char* label=(char* )malloc(sizeof(char)*4);
    sprintf(label, "L%d", label_no);
	++label_no;
    return strdup(label);
}