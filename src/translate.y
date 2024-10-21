%{
    #include <stdio.h>

    int yylex();
    int yyerror(char* s);

%}

%token PROGRAM_START WORD VAR_KW BEGIN_KW PROGRAMM_END

%union {
    char* id;
}

%%

commands: /* empty */
    | commands command
;



%%