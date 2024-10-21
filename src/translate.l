%{
#include <stdio.h>
#include <string.h>
%}

num         [0-9]+
word        [a-zA-Z_][a-zA-Z0-9_]*
string      \'..+\'
char        \'.?\'

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
{pr_start}  printf("PROGRAM_START ");
{uses}      printf("USES_KW ");
{var}       printf("VAR_KW ");
{const}     printf("CONST_KW ");
{begin}     printf("BEGIN_KW ");
{end}       printf("END_KW ");

{comment}   printf("COMMENT ");

{write}     printf("WRITE_F ");
{writeln}   printf("WRITELN_F ");
{read}      printf("READ_F ");
{readln}    printf("READLN_F ");

{uchar_type}    printf("UCHAR_T ");
{char_type}     printf("CHAR_T ");
{ushort_type}   printf("USHORT_T ");
{short_type}    printf("SHORT_T ");
{uint_type}     printf("UINT_T ");
{int_type}      printf("INT_T ");
{ulong_type}    printf("ULONG_T ");
{long_type}     printf("LONG_T ");
{long_long_t}   printf("LONG_LONG_T ");

{float_type}    printf("FLOAT_T ");
{double_type}   printf("DOUBLE_T ");

{wchar_type}    printf("WCHAR_T ");
{string_type}   printf("STRING_T ");

{o_br}      printf("OPEN_BR ");
{cl_br}     printf("CLOSE_BR ");
{o_sq_br}   printf("OPEN_SQUARE ");
{cl_sq_br}  printf("CLOSE_SQUARE ");
{o_c_br}    printf("OPEN_CURLY ");
{cl_c_br}   printf("CLOSE_CURLY ");
{delim}     printf("");
{newline}   printf("\n");

{aster}     printf("ASTERISK ");
{plus}      printf("PLUS ");
{minus}     printf("MINUS ");
{divf}      printf("DIV_F ");
{div}       printf("DIV_KW ");
{mod}       printf("MOD_KW ");
{eq}        printf("EQUALS ");
{n_eq}      printf("NOT_EQUAL");
{lt}        printf("LESS_THAN ");
{gt}        printf("GREATER_THAN ");
{lteq}      printf("LESS_OR_EQUALS ");
{gteq}      printf("GREATER_OR_EQUALS ");

{and}       printf("AND_KW ");
{or}        printf("OR_KW ");
{not}       printf("NOT_KW ");
{xor}       printf("XOR_KW ");

{if}        printf("IF_KW ");
{else}      printf("ELSE_KW ");
{loop}      printf("LOOP_KW ");
{while}     printf("WHILE_KW ");
{do}        printf("DO_KW ");
{for}       printf("FOR_KW ");
{to}        printf("TO_KW ");
{downto}    printf("DOWNTO_KW ");
{repeat}    printf("REPEAT_KW ");
{until}     printf("UNTIL_KW ");
{break}     printf("BREAK_KW ");
{continue}  printf("CONTINUE_KW ");

{proc}      printf("PROCEDURE_KW ");
{func}      printf("FUNCTION_KW ");

{semicolon} printf("SEMICOLON ");
{colon}     printf("COLON ");
{dot}       printf("DOT ");
{range}     printf("RANGE ");

{num}       printf("NUMBER ");
{string}    printf("STRING ");
{char}      printf("CHAR ");
{word}      printf("WORD ");
.?          printf("OTHER ");
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