%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

num         [0-9]+
word        [a-zA-Z_][a-zA-Z0-9_]*
string      \'..+\'
char        \'.?\'

pr_start    (Program)
var         (var)
begin       begin
pr_end      end\.

int_type    integer|longint

float_type  single
double_type real|double

wchar_type  char
string_type string

o_br        \(
cl_br       \)
delim       [ \t]
newline     \n

plus        \+
minus       \-
assign      :=

semicolon   ;

%%
{pr_start}  fprintf(yyout, "PROGRAM_START ");
{var}       fprintf(yyout, "VAR_KW ");
{begin}     fprintf(yyout, "BEGIN_KW ");
{pr_end}    fprintf(yyout, "PROGRAMM_END ");

{int_type}  fprintf(yyout, "INT_T ");

{o_br}      fprintf(yyout, "OPEN_BR ");
{cl_br}     fprintf(yyout, "CLOSE_BR ");
{delim}     fprintf(yyout, "");
{newline}   fprintf(yyout, "\n");

{plus}      fprintf(yyout, "PLUS ");
{minus}     fprintf(yyout, "MINUS ");
{assign}    fprintf(yyout, "ASSIGN ");

{semicolon} fprintf(yyout, "SEMICOLON ");

{num}       fprintf(yyout, "NUMBER ");
{string}    fprintf(yyout, "STRING ");
{char}      fprintf(yyout, "CHAR ");
{word}      fprintf(yyout, "WORD ");
.?          fprintf(yyout, "OTHER ");
%%

int yywrap() {
    return 1;
}

int main()
{
    FILE* input_file = fopen("source.pas", "r");
    FILE* output_file = fopen("output.txt", "w");
    yyin = input_file;
    yyout = output_file;
    yylex();
    return 0;
}