%{
    #include <stdio.h>

    int yylex();
    int yyerror(char* s);

%}

%token PROGRAM_START VAR_KW BEGIN_KW SEMICOLON COLON EQUALS INT_T PROGRAMM_END
%token <number> NUMBER
%token <id> WORD

%start program

%union {
    char* id;
    int number;
}

%%

program
    : pr_start {
        printf("%s", %1);
    }
;

pr_start
    : PROGRAM_START WORD {
        printf("// Program %s by TVV\n", %2);
        printf("int main(int argc, char* argv[]) {\n");
    }
;

%%