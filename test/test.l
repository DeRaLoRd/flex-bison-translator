%{
#include <stdio.h>
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
{pr_start}  printf("PROGRAM_START ");
{var}       printf("VAR_KW ");
{begin}     printf("BEGIN_KW ");
{pr_end}    printf("PROGRAMM_END ");

{int_type}      printf("INT_T ");

{o_br}      printf("OPEN_BR ");
{cl_br}     printf("CLOSE_BR ");
{delim}     printf("");
{newline}   printf("\n");

{plus}      printf("PLUS ");
{minus}     printf("MINUS ");
{assign}    printf("ASSIGN ");

{semicolon} printf("SEMICOLON ");

{num}       printf("NUMBER ");
{string}    printf("STRING ");
{char}      printf("CHAR ");
{word}      printf("WORD ");
.?          printf("OTHER ");
%%

int yywrap() {
    return 1;
}