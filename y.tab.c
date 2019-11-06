/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE *file ;
extern char * yytext;
char arr[100]="",arr1[100]="";
int section1 = 0, subsection = 0, issection;
FILE *fp;
void write_to_file();

struct node {

		struct node* left;
		char value[100000];
		
		struct node* right;
		struct node* sibling;
};

void add_tag(char lvalue[],char value[],char rvalue[])
{
	int len=0;
	memcpy(value+len,lvalue,strlen(lvalue)+1);
	len +=strlen(lvalue);
	memcpy(value+len," ",1);
	len += 1;
	memcpy(value+len,rvalue,strlen(rvalue)+1);
	

}

void add_htmltag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_tabletag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_tabletag1(char first[],char second[],char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	

}

void add_paratag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_listtag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_italictag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_boldtag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_enumtag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}
void add_nestenumtag(char first[],char second[],char third[],char fourth[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
	len +=strlen(third);
	memcpy(final+len,fourth,strlen(fourth)+1);
}
void add_sectiontag(char first[],char second[],char third[], char fourth[],char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
	len +=strlen(third);
	memcpy(final+len,fourth,strlen(fourth)+1);
}
struct node* createnode(struct node* left, char val[], struct node* right)
{
	int len=0;
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->left = left;
	node->right = right;
	node->sibling = NULL;
	len=strlen(val);
	memcpy(node->value,val,len);
	//node->value = val; 
	return node;

}
struct node* createsiblingnode(struct node* left, char val[], struct node* right,struct node* sibling)
{
	int len=0;
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->left = left;
	node->right = right;
	node->sibling = sibling;
	len=strlen(val);
	memcpy(node->value,val,len);
	//node->value = val; 
	return node;

}




void print(struct node* node)
{
 if(node==NULL)
	return;
else
	{
	fprintf(file,"%s",node->value);
	}
}

#line 241 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 177 "parser.y" /* yacc.c:355  */

  	char*	arr;
  	int	val;
        struct node* node;
 

#line 392 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 407 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   196,   196,   197,   200,   205,   211,   199,   227,   234,
     242,   250,   262,   268,   274,   280,   286,   292,   298,   304,
     310,   316,   322,   328,   334,   340,   345,   350,   356,   363,
     362,   380,   379,   395,   394,   411,   410,   427,   426,   441,
     440,   455,   464,   475,   474,   486,   498,   510,   516,   522,
     533,   542,   552,   564,   574,   583,   591,   599,   599,   608,
     617,   624,   631,   637,   644,   650,   656,   662,   670,   676,
     683,   669,   699,   698,   711,   710,   722,   730,   737,   743
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCUMENTCLASS", "BEGINDOC", "TITLE",
  "AUTHOR", "DATE", "MAKETITLE", "SECTION", "PARAGRAPH", "SUBSECTION",
  "TEXTBOLD", "TEXTITALIC", "UNDERLINE", "ENDDOC", "LCURLYB", "RCURLYB",
  "BEGINENUM", "ENDENUM", "ITEM", "LABEL", "CAPTION", "FRACS", "SQRE",
  "SQRS", "INTEGRAL", "SUM", "BEGINTABLE", "BEGINTABULAR", "HLINE",
  "AMPERSAND", "NEWLINE", "ENDTABLE", "ENDTABULAR", "PREAMBLE", "REF",
  "BEGINFIG", "INGRAPHICS", "ENDFIG", "WIDTH", "HEIGHT", "RBRACKET",
  "LBRACKET", "H", "T", "B", "L", "C", "R", "PIPE", "LETTERS", "WORD",
  "$accept", "word", "letters", "latexstatement", "$@1", "$@2", "$@3",
  "ignore", "body", "options", "section", "$@4", "$@5", "subsection",
  "$@6", "$@7", "paragraph", "$@8", "enumoption", "$@9", "listitem",
  "caption", "$@10", "label", "ref", "table", "tablebody", "starttabular",
  "endtabular", "tabularbody", "hline", "tablerow", "$@11", "sum",
  "integral", "squareroot", "fraction", "graphics", "$@12", "$@13", "$@14",
  "textbold", "$@15", "textitalic", "$@16", "textoption", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -62

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -62,    12,    -6,   -62,    -1,    -1,    27,   -62,   -62,
     115,    30,    35,    42,    59,    77,   -62,    16,    90,    92,
     100,    93,   -62,   -62,    13,   106,   101,   -62,   -62,   -62,
     -62,    -4,   -62,    76,   107,   -62,   -62,   130,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,    16,
     -62,   -62,   -62,   -62,   -62,   137,    16,   108,   -62,    95,
     134,   135,   -62,     7,   128,    60,   110,   120,   -62,   -62,
     148,   149,    16,   -62,   -62,    16,    16,    16,    16,    16,
     129,   151,    16,   152,   -13,   -62,   -62,   141,   138,   -62,
     142,   139,    16,   157,   136,   -62,   -62,   -62,    16,    -7,
      -2,    37,    40,    47,   -62,   -62,    61,   159,   161,   145,
     -62,   -62,   -62,   -62,    60,    69,   -62,   127,    16,    16,
     -62,   -62,   -62,   -62,   -62,   -62,   102,   104,   -62,   -62,
     -62,   -62,   -62,    78,    80,   156,   -11,   158,     1,    16,
     131,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   140,   132,
     -62,   143,   170,   144,   146,   147,   -62,   171,   165,   150,
     -62
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     1,     9,     9,     0,     8,     5,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,    61,    60,     0,     0,     0,     3,     2,    78,
      79,     0,    11,    12,    13,    16,    18,    19,    20,    23,
      24,    15,    25,    27,    26,    28,    14,    21,    22,    17,
      31,    37,    35,    72,    74,     0,    42,     0,    43,     0,
       0,     0,    51,     0,     0,    56,     0,     0,     6,    10,
       0,     0,     0,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    63,    62,     0,     0,    49,
      56,     0,     0,     0,     0,     7,    29,    33,    41,     0,
       0,     0,     0,     0,    40,    45,     0,     0,     0,     0,
      48,    55,    52,    50,    56,     0,    46,     0,     0,     0,
      32,    38,    36,    73,    75,    44,     0,     0,    47,    53,
      57,    59,    68,     0,     0,     3,     0,     3,     0,     0,
       0,    30,    34,    65,    66,    67,    64,    58,     0,     0,
      69,     0,     0,     0,     0,     0,    70,     0,     0,     0,
      71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -29,   -19,   -62,   -62,   -62,   -62,   184,   -62,   160,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     153,   -24,   -62,   154,   -62,   -62,   -61,   -62,   -62,    79,
     105,    53,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,     2,     3,    10,    95,     7,    31,    32,
      33,   118,    75,    34,   119,    77,    35,    76,    36,    55,
      37,    38,    82,    39,    40,    41,    64,    65,   113,    91,
      92,   114,   139,    42,    43,    44,    45,    46,   140,   151,
     157,    47,    78,    48,    79,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    56,    88,     1,   108,    11,    12,    13,    14,    15,
     120,    68,     4,   144,    16,   121,    17,    18,    19,    20,
      73,    21,    22,    23,    24,   146,   109,    73,    18,     5,
      74,     9,    25,    26,     6,    19,    62,    74,    27,    28,
      27,    28,    62,    84,    27,    28,    50,    27,    28,    27,
      28,    51,    27,    28,   122,    73,    98,   123,    52,    99,
     100,   101,   102,   103,   124,    74,   106,    27,    28,    73,
      73,    73,    73,    73,    73,    53,   115,    73,   125,    74,
      74,    74,    74,    74,    74,    70,    73,    74,    27,    28,
      90,    27,    28,    54,   -54,   141,    74,   142,    27,    28,
     130,   131,   133,   134,    73,    73,    57,    73,    58,    73,
     136,   138,    27,    28,    74,    74,    59,    74,    71,    74,
      27,    28,    66,   115,    11,    12,    13,    14,    15,    27,
      28,    27,    28,    16,   159,    17,    18,    19,    20,    67,
      21,    22,    23,    24,    60,    61,    83,    28,   104,    72,
      72,    25,    26,   135,    28,   137,    28,    17,    85,    86,
      81,    89,    93,    94,    96,    97,    27,    28,   105,   107,
      62,   110,    90,   112,   116,   126,   117,   127,   128,   132,
     143,   149,   145,   148,   150,   152,   153,    19,   158,   160,
       8,    69,   147,   129,     0,   111,   154,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,    87
};

static const yytype_int16 yycheck[] =
{
      24,    17,    63,     3,    17,     9,    10,    11,    12,    13,
      17,    15,     0,    24,    18,    17,    20,    21,    22,    23,
      49,    25,    26,    27,    28,    24,    87,    56,    21,    35,
      49,     4,    36,    37,    35,    22,    29,    56,    51,    52,
      51,    52,    29,    59,    51,    52,    16,    51,    52,    51,
      52,    16,    51,    52,    17,    84,    72,    17,    16,    75,
      76,    77,    78,    79,    17,    84,    82,    51,    52,    98,
      99,   100,   101,   102,   103,    16,    92,   106,    17,    98,
      99,   100,   101,   102,   103,     9,   115,   106,    51,    52,
      30,    51,    52,    16,    34,    17,   115,    17,    51,    52,
      31,    32,   118,   119,   133,   134,    16,   136,    16,   138,
     126,   127,    51,    52,   133,   134,    16,   136,    11,   138,
      51,    52,    16,   139,     9,    10,    11,    12,    13,    51,
      52,    51,    52,    18,   158,    20,    21,    22,    23,    38,
      25,    26,    27,    28,    51,    52,    51,    52,    19,    20,
      20,    36,    37,    51,    52,    51,    52,    20,    24,    24,
      52,    33,    52,    43,    16,    16,    51,    52,    17,    17,
      29,    33,    30,    34,    17,    16,    40,    16,    33,    52,
      24,    41,    24,    52,    52,    42,    16,    22,    17,    39,
       6,    31,   139,   114,    -1,    90,    52,    -1,    52,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    56,    57,     0,    35,    35,    60,    60,     4,
      58,     9,    10,    11,    12,    13,    18,    20,    21,    22,
      23,    25,    26,    27,    28,    36,    37,    51,    52,    54,
      55,    61,    62,    63,    66,    69,    71,    73,    74,    76,
      77,    78,    86,    87,    88,    89,    90,    94,    96,    98,
      16,    16,    16,    16,    16,    72,    98,    16,    16,    16,
      51,    52,    29,    74,    79,    80,    16,    38,    15,    62,
       9,    11,    20,    54,    55,    65,    70,    68,    95,    97,
      73,    52,    75,    51,    98,    24,    24,    76,    79,    33,
      30,    82,    83,    52,    43,    59,    16,    16,    98,    98,
      98,    98,    98,    98,    19,    17,    98,    17,    17,    79,
      33,    83,    34,    81,    84,    98,    17,    40,    64,    67,
      17,    17,    17,    17,    17,    17,    16,    16,    33,    82,
      31,    32,    52,    98,    98,    51,    98,    51,    98,    85,
      91,    17,    17,    24,    24,    24,    24,    84,    52,    41,
      52,    92,    42,    16,    52,    52,    52,    93,    17,    74,
      39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    57,    58,    59,    56,    60,    60,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    64,
      63,    65,    63,    67,    66,    68,    66,    70,    69,    72,
      71,    73,    73,    75,    74,    76,    77,    78,    78,    78,
      79,    80,    81,    82,    82,    83,    83,    85,    84,    84,
      86,    87,    88,    88,    89,    89,    89,    89,    91,    92,
      93,    90,    95,    94,    97,    96,    98,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     0,     9,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     0,     5,     0,     6,     0,     5,     0,     5,     0,
       4,     3,     2,     0,     5,     4,     4,     5,     4,     3,
       3,     1,     1,     3,     0,     2,     0,     0,     4,     2,
       1,     1,     3,     3,     7,     7,     7,     7,     0,     0,
       0,    19,     0,     5,     0,     5,     2,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 200 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"<!DOCTYPE html> \n <html>\n");
			}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 205 "parser.y" /* yacc.c:1646  */
    {
				//printf("\nIn Begin Document\n");				
				//fprintf(file,"<head>\n");
				//fprintf(file,"</head>\n");
				//fprintf(file,"<body>\n");
			}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 211 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"</body>\n"); 
			}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 214 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"</html>\n"); 
				char buff[200000];				
				add_tag((yyvsp[-5].node)->value,buff,(yyvsp[-2].node)->value);
				(yyval.node) = createnode ((yyvsp[-5].node),buff,(yyvsp[-2].node));

				char htmlBuff[200000];
				add_htmltag("<!DOCTYPE html> \n <html>\n<head>\n</head>\n<body>\n",buff,"\n</body>\n</html>\n",htmlBuff);				
				
				print((yyval.node));
			}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 227 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag("",buff,"");			
				(yyval.node) = createnode(NULL,buff,NULL);
			
			}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 234 "parser.y" /* yacc.c:1646  */
    {
				char buff[100000];
				add_tag("",buff,"");			
				(yyval.node) = createnode(NULL,buff,NULL);
		
			}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 243 "parser.y" /* yacc.c:1646  */
    { 		//printf("\nIn Body\n");
					char buff[200000];					
					add_tag((yyvsp[-1].node)->value,buff,(yyvsp[0].node)->value);
					(yyval.node) = createnode((yyvsp[-1].node),buff,(yyvsp[0].node));

					
			}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 251 "parser.y" /* yacc.c:1646  */
    { 
					//printf("\nIn Options\n");
					char buff[100000];
					//printf("$1->value is %s\n",$1->value);					
					add_tag((yyvsp[0].node)->value,buff,"");
					(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
					
			}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 263 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 269 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 275 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 281 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 287 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 293 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 299 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 305 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 311 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 317 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 323 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 329 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 335 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 340 "parser.y" /* yacc.c:1646  */
    {
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 345 "parser.y" /* yacc.c:1646  */
    {
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 350 "parser.y" /* yacc.c:1646  */
    {
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
			}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 356 "parser.y" /* yacc.c:1646  */
    {
				char buff[100000];
				add_tag((yyvsp[0].node)->value,buff,"");
				(yyval.node) = createnode((yyvsp[0].node),buff,NULL);
				}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 363 "parser.y" /* yacc.c:1646  */
    { 
				section1++; 
				//fprintf(file,"<h4>   %d  ", section1);
				
			}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 369 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"</h4>\n");
				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h4>  %d  ",section1);
				//printf("---------------->>>   %s",str);
				add_sectiontag(str,(yyvsp[-5].node)->value,(yyvsp[-1].node)->value,"</h4>\n",sectionBuff);
				//printf("SectionBuff -------------->>>   %s",sectionBuff);
				(yyval.node) = createnode((yyvsp[-5].node),sectionBuff,(yyvsp[-1].node));
			}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 380 "parser.y" /* yacc.c:1646  */
    { section1++; 
			  //fprintf(file,"<h4>  %d  ", section1);
			}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 383 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"</h4>\n");
				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h4>  %d  ",section1);
				add_sectiontag(str,"",(yyvsp[-1].node)->value,"</h4>\n",sectionBuff);
				//printf("SectionBuff -------------->>>   %s",sectionBuff);
				(yyval.node) = createnode(NULL,sectionBuff,(yyvsp[-1].node));
				
			}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 395 "parser.y" /* yacc.c:1646  */
    { 
				subsection++; 
				//fprintf(file,"<h5>  %d.%d  ",section1,subsection);
			}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 399 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"</h5>\n");


				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h5>  %d.%d  ",section1,subsection);
				add_sectiontag(str,(yyvsp[-5].node)->value,(yyvsp[-1].node)->value,"</h5>\n",sectionBuff);
				//printf("Sub-SectionBuff -------------->>>   %s",sectionBuff);
				(yyval.node) = createnode((yyvsp[-5].node),sectionBuff,(yyvsp[-1].node));
			}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 411 "parser.y" /* yacc.c:1646  */
    { 
				subsection++; 
				//fprintf(file,"<h5>  %d.%d  ",section1,subsection);
			}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 415 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"</h5>\n");
				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h5> %d.%d  ",section1,subsection);
				add_sectiontag(str,"",(yyvsp[-1].node)->value,"</h5>\n",sectionBuff);
				//printf(" JAI HO......... %s",$4->value);
				//printf("Sub-SectionBuff -------------->>>   %s",sectionBuff);
				(yyval.node) = createnode(NULL,sectionBuff,(yyvsp[-1].node));
			}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 427 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"<p>");
			}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 430 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"</p>\n");
				char buff[100000];
				add_paratag("\n<p>",(yyvsp[-1].node)->value,"</p>\n",buff);
				(yyval.node) = createnode(NULL,buff,(yyvsp[-1].node));
			}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 441 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"\n<ol>\n"); 
			}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 444 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"\n</ol>\n");
				char buff[100000];
				add_enumtag("\n<ol>\n",(yyvsp[-1].node)->value,"\n</ol>\n",buff);
				(yyval.node) = createnode(NULL,buff,(yyvsp[-1].node));
			}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 456 "parser.y" /* yacc.c:1646  */
    {
				char buff[100000];
				add_enumtag((yyvsp[-2].node)->value,"\n<li>",(yyvsp[0].node)->value,buff);
				//printf("1------in listitem buff is %s\n",buff);
				(yyval.node) = createnode((yyvsp[-2].node),buff,(yyvsp[0].node));

			}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 465 "parser.y" /* yacc.c:1646  */
    {

				char buff[100000];
				add_enumtag("\n<li>",(yyvsp[0].node)->value,"",buff);
				//printf("1------in listitem buff is %s\n",buff);
				(yyval.node) = createnode(NULL,buff,(yyvsp[0].node));
			}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 475 "parser.y" /* yacc.c:1646  */
    {
			//fprintf(file,"<br>\n<caption> &nbsp;&nbsp;&nbsp");
		 }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 479 "parser.y" /* yacc.c:1646  */
    {
			//fprintf(file,"</caption>");
			char buff[100000];
			add_italictag("<br>\n<caption> &nbsp;&nbsp",(yyvsp[-1].node)->value,"</caption>\n",buff);
			(yyval.node) = createnode(NULL,buff,(yyvsp[-1].node));
		}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 487 "parser.y" /* yacc.c:1646  */
    {
			
			//fprintf(file,"<a name = '%s'></a>",$3);

			char s[200];
			sprintf(s,"<a name = '%s'></a>",(yyvsp[-1].arr));
				
			(yyval.node) = createnode(NULL,s,NULL);
		 }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 499 "parser.y" /* yacc.c:1646  */
    {
			
			char s[200];
			sprintf(s,"<a href='#%s'>%s</a>",(yyvsp[-1].arr),(yyvsp[-1].arr));
			(yyval.node) = createnode(NULL,s,NULL);

		 }
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 511 "parser.y" /* yacc.c:1646  */
    {
			  char buff[100000];
			  add_tabletag((yyvsp[-3].node)->value,(yyvsp[-2].node)->value,(yyvsp[-1].node)->value,buff);
			  (yyval.node) = createsiblingnode((yyvsp[-3].node),buff,(yyvsp[-2].node),(yyvsp[-1].node));				
			}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 517 "parser.y" /* yacc.c:1646  */
    {
			  char buff[100000];
			  add_tabletag1((yyvsp[-2].node)->value,(yyvsp[-1].node)->value,buff);
			  (yyval.node) = createnode((yyvsp[-2].node),buff,(yyvsp[-1].node));
			}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 523 "parser.y" /* yacc.c:1646  */
    {
			  char buff[100000];
			  add_tabletag1((yyvsp[-1].node)->value,"",buff);
			  (yyval.node) = createnode((yyvsp[-1].node),buff,NULL);
			
			}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 534 "parser.y" /* yacc.c:1646  */
    {
			  char buff[100000];
			  add_tabletag((yyvsp[-2].node)->value,(yyvsp[-1].node)->value,(yyvsp[0].node)->value,buff);
			  //printf("\n$2 for table is -----%s----------\n",$2->value);
			  (yyval.node) = createsiblingnode((yyvsp[-2].node),buff,(yyvsp[-1].node),(yyvsp[0].node));				
			}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 543 "parser.y" /* yacc.c:1646  */
    {
			//printf("MARKER -1"); 
			  char buff[100000];
			  add_tabletag1("<table border=1>\n","",buff);
			  (yyval.node) = createnode(NULL,buff,NULL);
				
			}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 553 "parser.y" /* yacc.c:1646  */
    {
			  //fprintf(file,"</table>\n");
			//printf("MARKER 0"); 
			  char buff[100000];
			  add_tabletag1("</table>\n","",buff);
			  (yyval.node) = createnode(NULL,buff,NULL); 
			}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 565 "parser.y" /* yacc.c:1646  */
    {
			//printf("MARKER 1"); 
			  //fprintf(file,"<tr>\n<th> ");
			  char buff[100000];
			  add_tabletag("<tr>\n<th> ",(yyvsp[-1].node)->value,(yyvsp[0].node)->value,buff);
			  (yyval.node) = createsiblingnode((yyvsp[-2].node),buff,(yyvsp[-1].node),(yyvsp[0].node));
			  
		   }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 574 "parser.y" /* yacc.c:1646  */
    {
			//printf("MARKER 2");
			  char buff[100000];
			  add_tabletag1("","",buff);
		          (yyval.node) = createnode(NULL,buff,NULL);
		  }
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 584 "parser.y" /* yacc.c:1646  */
    {
				//printf("MARKER 3");
 			  char buff[100000];
			  add_tabletag1("",(yyvsp[0].node)->value,buff);
		          (yyval.node) = createnode(NULL,buff,(yyvsp[0].node));
			}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 591 "parser.y" /* yacc.c:1646  */
    {
			   char buff[100000];
			 // printf("\nIn Ebsilon\n");
				add_tabletag1("","",buff);
		          (yyval.node) = createnode(NULL,buff,NULL);
			}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 599 "parser.y" /* yacc.c:1646  */
    {
					// fprintf(file," </th> <th>"); 
					}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 603 "parser.y" /* yacc.c:1646  */
    {
			char buff[100000];
			add_tabletag((yyvsp[-3].node)->value," </th> <th>",(yyvsp[0].node)->value,buff);
   			(yyval.node) = createnode((yyvsp[-3].node),buff,(yyvsp[0].node));
		   }
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 609 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file," </th>\n</tr>\n"); 
			char buff[100000];
			add_tabletag((yyvsp[-1].node)->value," </th>\n</tr>\n","",buff);
   			(yyval.node) = createnode((yyvsp[-1].node),buff,NULL);
		   }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 617 "parser.y" /* yacc.c:1646  */
    {
			 char buff[100000];
			 add_tag("<b> &#8721 </b>",buff,"");
			(yyval.node) = createnode(NULL,buff,NULL);
			}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 624 "parser.y" /* yacc.c:1646  */
    { 
				char buff[100000];
			 	add_tag("<b> &#x222b </b>",buff,"");
				(yyval.node) = createnode(NULL,buff,NULL);
				
			    }
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 631 "parser.y" /* yacc.c:1646  */
    { 
					char buff[100000];
					sprintf(buff,"<b> &#8730 </b> %s",(yyvsp[-1].arr));
			 		(yyval.node) = createnode(NULL,buff,NULL);
					
				 }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 637 "parser.y" /* yacc.c:1646  */
    { 
					char buff[100000];
					sprintf(buff,"<b> &#8730 </b> %s",(yyvsp[-1].arr));
			 		(yyval.node) = createnode(NULL,buff,NULL);
					
				 }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 645 "parser.y" /* yacc.c:1646  */
    {
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",(yyvsp[-4].node)->value,(yyvsp[-1].node)->value);
			 		(yyval.node) = createnode(NULL,buff,NULL);			
				}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 651 "parser.y" /* yacc.c:1646  */
    {
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",(yyvsp[-4].arr),(yyvsp[-1].arr));
			 		(yyval.node) = createnode(NULL,buff,NULL);			
				}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 657 "parser.y" /* yacc.c:1646  */
    {
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",(yyvsp[-4].arr),(yyvsp[-1].node)->value);
			 		(yyval.node) = createnode(NULL,buff,NULL);			
				}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 663 "parser.y" /* yacc.c:1646  */
    {
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",(yyvsp[-4].node)->value,(yyvsp[-1].arr));
			 		(yyval.node) = createnode(NULL,buff,NULL);			
				}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 670 "parser.y" /* yacc.c:1646  */
    {
			
			//printf( "\nwidth value is %s\n",$5);
		
		 }
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 676 "parser.y" /* yacc.c:1646  */
    {
			
			//printf("\nheight value is %s\n",$9);
			//fprintf(file,"<img style='width:%s;height:%s;'",$5,$9);	
	
		 }
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 683 "parser.y" /* yacc.c:1646  */
    {
			
			//printf("\n image value is %s%s%s\n",$13,$14,$15);
			//fprintf(file,"src='%s%s%s'>",$13,$14,$15);
				
		 }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 689 "parser.y" /* yacc.c:1646  */
    {
			char buff[100000],l[200],r[200];
			sprintf(l,"<img style='width:%s;height:%s;'",(yyvsp[-14].arr),(yyvsp[-10].arr));
			sprintf(r,"src='%s%s%s'>",(yyvsp[-6].arr),(yyvsp[-5].arr),(yyvsp[-4].arr));
			add_listtag(l,r,(yyvsp[-1].node)->value,buff);
			(yyval.node) = createnode(NULL,buff,NULL);
		 }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 699 "parser.y" /* yacc.c:1646  */
    {
			//fprintf(file,"<b>");
		}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 702 "parser.y" /* yacc.c:1646  */
    {
			//fprintf(file,"</b>\n");
			char buff[100000];
			add_italictag("<b>\n",(yyvsp[-1].node)->value,"</b>\n",buff);
			(yyval.node) = createnode(NULL,buff,(yyvsp[-1].node));
		}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 711 "parser.y" /* yacc.c:1646  */
    {
			//fprintf(file,"<i>");
		}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 714 "parser.y" /* yacc.c:1646  */
    {
			//fprintf(file,"</i>\n");
			char buff[100000];
			add_italictag("<i>\n",(yyvsp[-1].node)->value,"</i>\n",buff);
			(yyval.node) = createnode(NULL,buff,(yyvsp[-1].node));
		}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 723 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag((yyvsp[-1].node)->value,buff,(yyvsp[0].arr));
				(yyval.node) = createnode((yyvsp[-1].node),buff,NULL);
				
			}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 731 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag((yyvsp[-1].node)->value,buff,(yyvsp[0].arr));
				(yyval.node) = createnode((yyvsp[-1].node),buff,NULL);
			}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 737 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag((yyvsp[0].arr),buff,"");
				(yyval.node) = createnode(NULL,buff,NULL);
			}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 743 "parser.y" /* yacc.c:1646  */
    {
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag((yyvsp[0].arr),buff,"");
				(yyval.node) = createnode(NULL,buff,NULL);
			  }
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2427 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 751 "parser.y" /* yacc.c:1906  */
 

int main(int argc, char *argv[])
{
 char fname[100];
 strcpy(fname, argv[1]);
file = fopen(fname,"w");
if (file == NULL)
printf("Couldnot open the file\n");
 return yyparse();
}

int yyerror (char *msg) {
   
       fprintf(file,"ERROR");
    
    
    
	return fprintf (stderr, "YACC: %s\n ", msg);
	}

