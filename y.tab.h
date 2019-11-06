/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOCUMENTCLASS = 258,
    BEGINDOC = 259,
    TITLE = 260,
    AUTHOR = 261,
    DATE = 262,
    MAKETITLE = 263,
    SECTION = 264,
    PARAGRAPH = 265,
    SUBSECTION = 266,
    TEXTBOLD = 267,
    TEXTITALIC = 268,
    UNDERLINE = 269,
    ENDDOC = 270,
    LCURLYB = 271,
    RCURLYB = 272,
    BEGINENUM = 273,
    ENDENUM = 274,
    ITEM = 275,
    LABEL = 276,
    CAPTION = 277,
    FRACS = 278,
    SQRE = 279,
    SQRS = 280,
    INTEGRAL = 281,
    SUM = 282,
    BEGINTABLE = 283,
    BEGINTABULAR = 284,
    HLINE = 285,
    AMPERSAND = 286,
    NEWLINE = 287,
    ENDTABLE = 288,
    ENDTABULAR = 289,
    PREAMBLE = 290,
    REF = 291,
    BEGINFIG = 292,
    INGRAPHICS = 293,
    ENDFIG = 294,
    WIDTH = 295,
    HEIGHT = 296,
    RBRACKET = 297,
    LBRACKET = 298,
    H = 299,
    T = 300,
    B = 301,
    L = 302,
    C = 303,
    R = 304,
    PIPE = 305,
    LETTERS = 306,
    WORD = 307
  };
#endif
/* Tokens.  */
#define DOCUMENTCLASS 258
#define BEGINDOC 259
#define TITLE 260
#define AUTHOR 261
#define DATE 262
#define MAKETITLE 263
#define SECTION 264
#define PARAGRAPH 265
#define SUBSECTION 266
#define TEXTBOLD 267
#define TEXTITALIC 268
#define UNDERLINE 269
#define ENDDOC 270
#define LCURLYB 271
#define RCURLYB 272
#define BEGINENUM 273
#define ENDENUM 274
#define ITEM 275
#define LABEL 276
#define CAPTION 277
#define FRACS 278
#define SQRE 279
#define SQRS 280
#define INTEGRAL 281
#define SUM 282
#define BEGINTABLE 283
#define BEGINTABULAR 284
#define HLINE 285
#define AMPERSAND 286
#define NEWLINE 287
#define ENDTABLE 288
#define ENDTABULAR 289
#define PREAMBLE 290
#define REF 291
#define BEGINFIG 292
#define INGRAPHICS 293
#define ENDFIG 294
#define WIDTH 295
#define HEIGHT 296
#define RBRACKET 297
#define LBRACKET 298
#define H 299
#define T 300
#define B 301
#define L 302
#define C 303
#define R 304
#define PIPE 305
#define LETTERS 306
#define WORD 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 177 "parser.y" /* yacc.c:1909  */

  	char*	arr;
  	int	val;
        struct node* node;
 

#line 165 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
