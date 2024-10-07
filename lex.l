%{
#include <stdio.h>
%}

num     [0-9]+
word    [a-zA-Z_][a-zA-Z0-9]*
string  \'.*\'
special 

%%
{num}       printf("NUMBER");
{string}    printf("STRING");
{word}      printf("WORD");
.?          printf("OTHER");
%%

int yywrap() {
    return 1;
}