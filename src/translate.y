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
    double fval;
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

%token NUMBER NUMBERF WORD OTHER

%type<ival> NUMBER
%type<cval> WORD INT_T USHORT_T SHORT_T UINT_T ULONG_T LONG_T LONG_LONG_T FLOAT_T DOUBLE_T 
%type<cval> UCHAR_T CHAR_T WCHAR_T STRING_T var_type
%type<fval> NUMBERF

%start program

%%

program
    : start_block var_block prog_block
;

start_block
    : PROGRAM_START WORD SEMICOLON {
        fprintf(yyout, "/* Translated through PTSD - Pascal To \"Si\" translaDor\n" \
                       " * By Vasiliy Tarasevich 2024\n" \
                       " * Original programme name - %s\n" \
                       " */\n\n", $2);

        fprintf(yyout, "#include <stdio.h>\n" \
                       "#include <stdlib.h>\n" \
                       "#include <string.h>\n" \
                       "#include <stddef.h>\n\n");
    }
;

var_block
    : /* empty */
    | var_block_begin var_decls 
;

var_block_begin
    : VAR_KW {fprintf(yyout, "// Global declarations\n");}
;

var_decls
    : /* empty */
    | var_decls var_decl
;

var_decl
    : WORD COLON var_type SEMICOLON {fprintf(yyout, "%s %s;\n", $3, $1);}
;

var_type
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
    : assignment SEMICOLON
;

assignment
    : WORD ASSIGN NUMBER {fprintf(yyout, "%s = %d;\n", $1, $3);}
;

prog_block_end
    : END_KW DOT {fprintf(yyout, "return 0;\n}");}
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