%{
#include <stdio.h>
#include <stdlib.h>

/*FILE* input_file = fopen("source.txt", "r");
FILE* output_file = fopen("output.txt", "w");*/

int yylex();
void yyerror(char* s);
%}

%union {
    int ival;
    char* cval;
}

%token PROGRAM_START VAR_KW WORD COLON SEMICOLON INT_T NUMBER BEGIN_KW ASSIGN END_KW DOT
%type<ival> NUMBER
%type<cval> WORD INT_T var_type
%start program

%%

program
    : start_block var_block prog_block
;

start_block
    : PROGRAM_START WORD SEMICOLON {printf("we hav programm %s\n", $2);}
;

var_block
    : /* empty */
    | VAR_KW var_decls {printf("we hav vars such as:\n");}
;

var_decls
    : /* empty */
    | var_decls var_decl
;

var_decl
    : WORD COLON var_type SEMICOLON {printf("we hav var %s of type %s\n", $1, $3);}
;

var_type
    : INT_T
;

prog_block
    : BEGIN_KW commands END_KW DOT {printf("program began and we do:\n");}
;

commands
    : /* empty */
    | commands command
;

command
    : assignment SEMICOLON
;

assignment
    : WORD ASSIGN NUMBER {printf("we assign value %d to var %s\n", $3, $1);}
;

%%

int main()
{
    return yyparse();
}

void yyerror(char* s)
{
    printf("%s", s);
}