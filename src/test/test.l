%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.tab.h"
%}

num         [0-9]+
numf        [0-9]+\.[0-9]+
word        [a-zA-Z_][a-zA-Z0-9_]*

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
delim       [ \t]
newline     \n

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

%%
{pr_start}  {return PROGRAM_START;} 
{var}       {return VAR_KW;} 
{begin}     {return BEGIN_KW;}
{end}       {return END_KW;}
 
 
  
{int_type}      {yylval.cval = "int"; return INT_T;}  
 
 

{assign}    {return ASSIGN;}
 

{semicolon} {return SEMICOLON;}
{colon}     {return COLON;}
{dot}       {return DOT;} 

{num}       {yylval.ival = atoi(yytext); return NUMBER;} 
{word}      {yylval.cval = strdup(yytext); return WORD;} 
%%

int yywrap() {
    return 1;
}