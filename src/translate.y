%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE* yyin;
extern FILE* yyout;

int yylex();
void yyerror(char* s);

int yydebug = 1;
%}

%union {
    char* cval;
}

%token PROGRAM_START USES_KW VAR_KW CONST_KW BEGIN_KW END_KW

%token COMMENT

%token WRITE_F WRITELN_F READ_F READLN_F 

%token USHORT_T SHORT_T UINT_T INT_T ULONG_T LONG_T LONG_LONG_T 
%token FLOAT_T DOUBLE_T
%token UCHAR_T CHAR_T WCHAR_T STRING_T

%token OPEN_BR CLOSE_BR OPEN_SQUARE CLOSE_SQUARE OPEN_CURLY CLOSE_CURLY 
%token QUOTE 

%token ASTERISK PLUS MINUS DIV_F DIV_KW MOD_KW
%token ASSIGN
%token EQUALS NOT_EQUAL LESS_THAN GREATER_THAN LESS_OR_EQUALS GREATER_OR_EQUALS AND_KW OR_KW NOT_KW XOR_KW 
%token IF_KW THEN_KW ELSE_KW LOOP_KW WHILE_KW DO_KW FOR_KW TO_KW DOWNTO_KW REPEAT_KW UNTIL_KW BREAK_KW
%token CONTINUE_KW 

%token PROCEDURE_KW FUNCTION_KW 

%token SEMICOLON COLON DOT RANGE 

%token NUMBER NUMBERF ID WORD

%type<cval> ID WORD INT_T USHORT_T SHORT_T UINT_T ULONG_T LONG_T LONG_LONG_T FLOAT_T DOUBLE_T
%type<cval> NUMBER NUMBERF
%type<cval> UCHAR_T CHAR_T WCHAR_T STRING_T
%type<cval> gen_var_type int_var_type float_var_type int_expr

%left PLUS MINUS ASTERISK DIV_F DIV_KW MOD_KW

%start program

%%

program
    : start_block const_block var_block prog_block
;

start_block
    : PROGRAM_START ID SEMICOLON {
        fprintf(yyout, "/* Translated through PTSD - Pascal To \"Si\" translaDor\n" \
                       " * By Vasiliy Tarasevich 2024\n" \
                       " * Original programme name - %s\n" \
                       " */\n\n", $2);

        fprintf(yyout, "#include <stdio.h>\n" \
                       "#include <stdlib.h>\n" \
                       "#include <string.h>\n" \
                       "#include <stddef.h>\n");
    }
;

var_block
    : /* empty */
    | var_block_begin var_decls 
;

const_block
    : /* empty */
    | const_block_begin const_decls
;

var_block_begin
    : VAR_KW {fprintf(yyout, "\n// Global variables\n");}
;

var_decls
    : /* empty */
    | var_decls var_decl
    | var_decls var_decl_init
;

var_decl
    : ID COLON gen_var_type SEMICOLON {fprintf(yyout, "%s %s;\n", $3, $1);}
;

var_decl_init
    : ID COLON int_var_type EQUALS NUMBER SEMICOLON {fprintf(yyout, "%s %s = %s;\n", $3, $1, $5);}
    | ID COLON float_var_type EQUALS NUMBERF SEMICOLON {fprintf(yyout, "%s %s = %s;\n", $3, $1, $5);}
;

const_block_begin
    : CONST_KW {fprintf(yyout, "\n// Global constants\n");}
;

const_decls
    : /* empty */
    | const_decls const_decl
;

const_decl
    : ID COLON int_var_type EQUALS NUMBER SEMICOLON {fprintf(yyout, "const %s %s = %s;\n", $3, $1, $5);}
;

gen_var_type
    : CHAR_T
    | UCHAR_T
    | WCHAR_T
    | SHORT_T
    | USHORT_T
    | INT_T
    | UINT_T
    | LONG_T
    | ULONG_T
    | LONG_LONG_T
    | FLOAT_T
    | DOUBLE_T
    | STRING_T
;

int_var_type
    : CHAR_T
    | UCHAR_T
    | SHORT_T
    | USHORT_T
    | INT_T
    | UINT_T
    | LONG_T
    | ULONG_T
    | LONG_LONG_T
;

float_var_type
    : FLOAT_T
    | DOUBLE_T
;


prog_block
    : prog_block_begin commands prog_block_end 
;

prog_block_begin
    : BEGIN_KW {fprintf(yyout, "\nint main() \n{\n");}
;

commands
    : /* empty */
    | commands command
;

command
    : int_assignment SEMICOLON;
;

int_assignment
    : ID ASSIGN int_expr {fprintf(yyout, "\t%s = %s;\n", $1, $3);}
;

int_expr
    : NUMBER                        {sprintf($$, "%s", $1);}
;


prog_block_end
    : END_KW DOT {fprintf(yyout, "\treturn 0;\n}");}
;

%%

int main()
{
    yyin = fopen("source.txt", "r");
    yyout = fopen("output.c", "w");

    return yyparse();
}

void yyerror(char* s)
{
    fprintf(yyout, "%s", s);
}