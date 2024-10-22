%{
#include <stdio.h>
#include <stdlib.h>

extern FILE* yyin;
extern FILE* yyout;

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
    : PROGRAM_START WORD SEMICOLON {fprintf(yyout, "we hav programm %s\n", $2);}
;

var_block
    : /* empty */
    | var_block_begin var_decls 
;

var_block_begin
    : VAR_KW {fprintf(yyout, "we hav vars such as:\n");}
;

var_decls
    : /* empty */
    | var_decls var_decl
;

var_decl
    : WORD COLON var_type SEMICOLON {fprintf(yyout, "we hav var %s of type %s\n", $1, $3);}
;

var_type
    : INT_T
;

prog_block
    : prog_block_begin commands prog_block_end 
;

prog_block_begin
    : BEGIN_KW {fprintf(yyout, "program began and we do:\n");}
;

commands
    : /* empty */
    | commands command
;

command
    : assignment SEMICOLON
;

assignment
    : WORD ASSIGN NUMBER {fprintf(yyout, "we assign value %d to var %s\n", $3, $1);}
;

prog_block_end
    : END_KW DOT {fprintf(yyout, "program end\n");}
;

%%

int main()
{
    yyin = fopen("source.txt", "r");
    yyout = fopen("output.txt", "w");
    return yyparse();
}

void yyerror(char* s)
{
    fprintf(yyout, "%s", s);
}