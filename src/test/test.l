%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.tab.h"
%}

num         [0-9]+
word        [a-zA-Z_][a-zA-Z0-9_]*
string      \'..+\'
char        \'.?\'

pr_start    (Program)
var         (var)
begin       begin
end         end
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
dot         \.

semicolon   ;
colon       :

%%
{pr_start}  return (PROGRAM_START);
{var}       return (VAR_KW);
{begin}     return (BEGIN_KW);
{end}       return (END_KW);

{int_type}  {yylval.cval = "int"; return (INT_T);}

{o_br}      fprintf(yyout, "OPEN_BR ");
{cl_br}     fprintf(yyout, "CLOSE_BR ");
{delim}     fprintf(yyout, "");
{newline}   fprintf(yyout, "\n");

{plus}      fprintf(yyout, "PLUS ");
{minus}     fprintf(yyout, "MINUS ");
{assign}    return (ASSIGN);
{dot}       return (DOT);

{semicolon} return (SEMICOLON);
{colon}     return (COLON);

{num}       {yylval.ival = atoi(yytext); return (NUMBER);}
{word}      {yylval.cval = strdup(yytext); return (WORD);}
.?          fprintf(yyout, "OTHER ");
%%

int yywrap() {
    return 1;
}