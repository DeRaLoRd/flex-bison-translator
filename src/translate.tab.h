
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM_START = 258,
     USES_KW = 259,
     VAR_KW = 260,
     CONST_KW = 261,
     BEGIN_KW = 262,
     END_KW = 263,
     COMMENT = 264,
     WRITE_F = 265,
     WRITELN_F = 266,
     READ_F = 267,
     READLN_F = 268,
     USHORT_T = 269,
     SHORT_T = 270,
     UINT_T = 271,
     INT_T = 272,
     ULONG_T = 273,
     LONG_T = 274,
     LONG_LONG_T = 275,
     FLOAT_T = 276,
     DOUBLE_T = 277,
     UCHAR_T = 278,
     CHAR_T = 279,
     WCHAR_T = 280,
     STRING_T = 281,
     OPEN_BR = 282,
     CLOSE_BR = 283,
     OPEN_SQUARE = 284,
     CLOSE_SQUARE = 285,
     OPEN_CURLY = 286,
     CLOSE_CURLY = 287,
     QUOTE = 288,
     ASTERISK = 289,
     PLUS = 290,
     MINUS = 291,
     DIV_F = 292,
     DIV_KW = 293,
     MOD_KW = 294,
     ASSIGN = 295,
     EQUALS = 296,
     NOT_EQUAL = 297,
     LESS_THAN = 298,
     GREATER_THAN = 299,
     LESS_OR_EQUALS = 300,
     GREATER_OR_EQUALS = 301,
     AND_KW = 302,
     OR_KW = 303,
     NOT_KW = 304,
     XOR_KW = 305,
     IF_KW = 306,
     THEN_KW = 307,
     ELSE_KW = 308,
     LOOP_KW = 309,
     WHILE_KW = 310,
     DO_KW = 311,
     FOR_KW = 312,
     TO_KW = 313,
     DOWNTO_KW = 314,
     REPEAT_KW = 315,
     UNTIL_KW = 316,
     BREAK_KW = 317,
     CONTINUE_KW = 318,
     PROCEDURE_KW = 319,
     FUNCTION_KW = 320,
     SEMICOLON = 321,
     COLON = 322,
     DOT = 323,
     RANGE = 324,
     NUMBER = 325,
     NUMBERF = 326,
     ID = 327,
     WORD = 328
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 24 "translate.y"

    char* cval;



/* Line 1676 of yacc.c  */
#line 131 "translate.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


