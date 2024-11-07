%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "translate.tab.h"
%}

num         [0-9]+
numf        [0-9]+\.[0-9]+
id          [a-zA-Z_][a-zA-Z0-9_]*
word        \'.*\'

pr_start    Program
var         var
const       const
uses        uses
begin       begin
end         end

comment     \(\*.*\*\)|\{.*\}|\/\/.*

write       write
writeln     writeln
read        read
readln      readln

uchar_type  byte
char_type   shortint
ushort_type word
short_type  smallint
uint_type   longword|cardinal
int_type    integer|longint
ulong_type  uint64
long_type   int_64
long_long_t biginteger

float_type  single
double_type real|double

wchar_type  char
string_type string

o_br        \(
cl_br       \)
o_sq_br     \[
cl_sq_br    \]
o_c_br      \{
cl_c_br     \}
quote       \'
delim       [ \t\n]

aster       \*
plus        \+
minus       \-
divf        \/
div         div
mod         mod
eq          =
n_eq        <>
lt          >
gt          <
lteq        <=
gteq        >=

assign      :=

not         not
and         and
or          or
xor         xor

if          if
then        then
else        else
loop        loop
while       while
do          do
for         for
to          to
downto      downto
repeat      repeat
until       until
break       break
continue    continue

proc        procedure
func        function

semicolon   ;
colon       :
dot         \.
range       \.\.
comma       ,

%%
{pr_start}  {return PROGRAM_START;}
{uses}      {return USES_KW;}
{var}       {return VAR_KW;}
{const}     {return CONST_KW;}
{begin}     {return BEGIN_KW;}
{end}       {return END_KW;}

{delim}     ;

{and}       {return AND_KW;}
{or}        {return OR_KW;}
{not}       {return NOT_KW;}
{xor}       {return XOR_KW;}

{if}        {return IF_KW;}
{then}      {return THEN_KW;}
{else}      {return ELSE_KW;}
{loop}      {return LOOP_KW;}
{while}     {return WHILE_KW;}
{do}        {return DO_KW;}
{for}       {return FOR_KW;}
{to}        {return TO_KW;}
{downto}    {return DOWNTO_KW;}
{repeat}    {return REPEAT_KW;}
{until}     {return UNTIL_KW;}
{break}     {return BREAK_KW;}
{continue}  {return CONTINUE_KW;}

{comment}   {return COMMENT;}

{write}     {return WRITE_F;}
{writeln}   {return WRITELN_F;}
{read}      {return READ_F;}
{readln}    {return READLN_F;}

{uchar_type}    {yylval.cval = "unsigned char"; return UCHAR_T;}
{char_type}     {yylval.cval = "char"; return CHAR_T;}
{ushort_type}   {yylval.cval = "unsigned short"; return USHORT_T;}
{short_type}    {yylval.cval = "short"; return SHORT_T;}
{uint_type}     {yylval.cval = "unsigned int"; return UINT_T;}
{int_type}      {yylval.cval = "int"; return INT_T;}
{ulong_type}    {yylval.cval = "unsigned long"; return ULONG_T;}
{long_type}     {yylval.cval = "long"; return LONG_T;}
{long_long_t}   {yylval.cval = "long long"; return LONG_LONG_T;}

{float_type}    {yylval.cval = "float"; return FLOAT_T;}
{double_type}   {yylval.cval = "double"; return DOUBLE_T;}

{wchar_type}    {yylval.cval = "wchar_t"; return WCHAR_T;}
{string_type}   {yylval.cval = "char*"; return STRING_T;}

{o_br}      {return OPEN_BR;}
{cl_br}     {return CLOSE_BR;}
{o_sq_br}   {return OPEN_SQUARE;}
{cl_sq_br}  {return CLOSE_SQUARE;}
{o_c_br}    {return OPEN_CURLY;}
{cl_c_br}   {return CLOSE_CURLY;}
{quote}     {return QUOTE;}

{assign}    {return ASSIGN;}

{aster}     {return ASTERISK;}
{plus}      {return PLUS;}
{minus}     {return MINUS;}
{divf}      {return DIV_F;}
{div}       {return DIV_KW;}
{mod}       {return MOD_KW;}
{eq}        {return EQUALS;}
{n_eq}      {return NOT_EQUAL;}
{lt}        {return LESS_THAN;}
{gt}        {return GREATER_THAN;}
{lteq}      {return LESS_OR_EQUALS;}
{gteq}      {return GREATER_OR_EQUALS;}

{proc}      {return PROCEDURE_KW;}
{func}      {return FUNCTION_KW;}

{semicolon} {return SEMICOLON;}
{colon}     {return COLON;}
{dot}       {return DOT;}
{range}     {return RANGE;}
{comma}     {return COMMA;}

{num}       {yylval.cval = strdup(yytext); return NUMBER;}
{numf}      {yylval.cval = strdup(yytext); return NUMBERF;}
{id}        {yylval.cval = strdup(yytext); return ID;}
{word}      {yytext[strlen(yytext) - 1] = '\0'; yylval.cval = strdup(yytext + 1); return WORD;}
%%

int yywrap() {
    return 1;
}