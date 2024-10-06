%{
#include <stdio.h>
%}

num     [0-9]+
word    [a-zA-Z][a-zA-Z0-9]*

%%
{num}   printf("NUMBER");
{word}  printf("WORD");
.?      printf("OTHER");
%%

int yywrap() {
    return 1;
}