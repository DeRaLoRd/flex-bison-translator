%{
#include <stdio.h>
#include <string.h>
%}

num         [0-9]+
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
{pr_start}  fprintf(yyout, "PROGRAM_START ");
{uses}      fprintf(yyout, "USES_KW ");
{var}       fprintf(yyout, "VAR_KW ");
{const}     fprintf(yyout, "CONST_KW ");
{begin}     fprintf(yyout, "BEGIN_KW ");
{end}       fprintf(yyout, "END_KW ");

{comment}   fprintf(yyout, "COMMENT ");

{write}     fprintf(yyout, "WRITE_F ");
{writeln}   fprintf(yyout, "WRITELN_F ");
{read}      fprintf(yyout, "READ_F ");
{readln}    fprintf(yyout, "READLN_F ");

{uchar_type}    fprintf(yyout, "UCHAR_T ");
{char_type}     fprintf(yyout, "CHAR_T ");
{ushort_type}   fprintf(yyout, "USHORT_T ");
{short_type}    fprintf(yyout, "SHORT_T ");
{uint_type}     fprintf(yyout, "UINT_T ");
{int_type}      fprintf(yyout, "INT_T ");
{ulong_type}    fprintf(yyout, "ULONG_T ");
{long_type}     fprintf(yyout, "LONG_T ");
{long_long_t}   fprintf(yyout, "LONG_LONG_T ");

{float_type}    fprintf(yyout, "FLOAT_T ");
{double_type}   fprintf(yyout, "DOUBLE_T ");

{wchar_type}    fprintf(yyout, "WCHAR_T ");
{string_type}   fprintf(yyout, "STRING_T ");

{o_br}      fprintf(yyout, "OPEN_BR ");
{cl_br}     fprintf(yyout, "CLOSE_BR ");
{o_sq_br}   fprintf(yyout, "OPEN_SQUARE ");
{cl_sq_br}  fprintf(yyout, "CLOSE_SQUARE ");
{o_c_br}    fprintf(yyout, "OPEN_CURLY ");
{cl_c_br}   fprintf(yyout, "CLOSE_CURLY ");
{quote}     fprintf(yyout, "QUOTE ");
{delim}     fprintf(yyout, "");
{newline}   fprintf(yyout, "\n");

{aster}     fprintf(yyout, "ASTERISK ");
{plus}      fprintf(yyout, "PLUS ");
{minus}     fprintf(yyout, "MINUS ");
{divf}      fprintf(yyout, "DIV_F ");
{div}       fprintf(yyout, "DIV_KW ");
{mod}       fprintf(yyout, "MOD_KW ");
{eq}        fprintf(yyout, "EQUALS ");
{n_eq}      fprintf(yyout, "NOT_EQUAL");
{lt}        fprintf(yyout, "LESS_THAN ");
{gt}        fprintf(yyout, "GREATER_THAN ");
{lteq}      fprintf(yyout, "LESS_OR_EQUALS ");
{gteq}      fprintf(yyout, "GREATER_OR_EQUALS ");

{and}       fprintf(yyout, "AND_KW ");
{or}        fprintf(yyout, "OR_KW ");
{not}       fprintf(yyout, "NOT_KW ");
{xor}       fprintf(yyout, "XOR_KW ");

{if}        fprintf(yyout, "IF_KW ");
{then}      fprintf(yyout, "THEN_KW ");
{else}      fprintf(yyout, "ELSE_KW ");
{loop}      fprintf(yyout, "LOOP_KW ");
{while}     fprintf(yyout, "WHILE_KW ");
{do}        fprintf(yyout, "DO_KW ");
{for}       fprintf(yyout, "FOR_KW ");
{to}        fprintf(yyout, "TO_KW ");
{downto}    fprintf(yyout, "DOWNTO_KW ");
{repeat}    fprintf(yyout, "REPEAT_KW ");
{until}     fprintf(yyout, "UNTIL_KW ");
{break}     fprintf(yyout, "BREAK_KW ");
{continue}  fprintf(yyout, "CONTINUE_KW ");

{proc}      fprintf(yyout, "PROCEDURE_KW ");
{func}      fprintf(yyout, "FUNCTION_KW ");

{semicolon} fprintf(yyout, "SEMICOLON ");
{colon}     fprintf(yyout, "COLON ");
{dot}       fprintf(yyout, "DOT ");
{range}     fprintf(yyout, "RANGE ");

{num}       fprintf(yyout, "NUMBER ");
{word}      fprintf(yyout, "WORD ");
.?          fprintf(yyout, "OTHER ");
%%

int yywrap() {
    return 1;
}

int main()
{
    FILE* input_file = fopen("source.txt", "r");
    FILE* output_file = fopen("output.txt", "w");
    yyin = input_file;
    yyout = output_file;
    yylex();
    return 0;
}