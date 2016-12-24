<<<<<<< HEAD

/*  A Bison parser, made from cmdgram.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse CMDparse
#define yylex CMDlex
#define yyerror CMDerror
#define yylval CMDlval
#define yychar CMDchar
#define yydebug CMDdebug
#define yynerrs CMDnerrs
#define	rwDEFINE	258
#define	rwENDDEF	259
#define	rwDECLARE	260
#define	rwDECLARESINGLETON	261
#define	rwBREAK	262
#define	rwELSE	263
#define	rwCONTINUE	264
#define	rwGLOBAL	265
#define	rwIF	266
#define	rwNIL	267
#define	rwRETURN	268
#define	rwWHILE	269
#define	rwDO	270
#define	rwENDIF	271
#define	rwENDWHILE	272
#define	rwENDFOR	273
#define	rwDEFAULT	274
#define	rwFOR	275
#define	rwFOREACH	276
#define	rwFOREACHSTR	277
#define	rwIN	278
#define	rwDATABLOCK	279
#define	rwSWITCH	280
#define	rwCASE	281
#define	rwSWITCHSTR	282
#define	rwCASEOR	283
#define	rwPACKAGE	284
#define	rwNAMESPACE	285
#define	rwCLASS	286
#define	rwASSERT	287
#define	ILLEGAL_TOKEN	288
#define	CHRCONST	289
#define	INTCONST	290
#define	TTAG	291
#define	VAR	292
#define	IDENT	293
#define	TYPEIDENT	294
#define	DOCBLOCK	295
#define	STRATOM	296
#define	TAGATOM	297
#define	FLTCONST	298
#define	opINTNAME	299
#define	opINTNAMER	300
#define	opMINUSMINUS	301
#define	opPLUSPLUS	302
#define	STMT_SEP	303
#define	opSHL	304
#define	opSHR	305
#define	opPLASN	306
#define	opMIASN	307
#define	opMLASN	308
#define	opDVASN	309
#define	opMODASN	310
#define	opANDASN	311
#define	opXORASN	312
#define	opORASN	313
#define	opSLASN	314
#define	opSRASN	315
#define	opCAT	316
#define	opEQ	317
#define	opNE	318
#define	opGE	319
#define	opLE	320
#define	opAND	321
#define	opOR	322
#define	opSTREQ	323
#define	opCOLONCOLON	324
#define	opMDASN	325
#define	opNDASN	326
#define	opNTASN	327
#define	opSTRNE	328
#define	UNARY	329

#line 1 "cmdgram.y"
=======
/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse CMDparse
#define yylex   CMDlex
#define yyerror CMDerror
#define yylval  CMDlval
#define yychar  CMDchar
#define yydebug CMDdebug
#define yynerrs CMDnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     rwDEFINE = 258,
     rwENDDEF = 259,
     rwDECLARE = 260,
     rwDECLARESINGLETON = 261,
     rwBREAK = 262,
     rwELSE = 263,
     rwCONTINUE = 264,
     rwGLOBAL = 265,
     rwIF = 266,
     rwNIL = 267,
     rwRETURN = 268,
     rwWHILE = 269,
     rwDO = 270,
     rwENDIF = 271,
     rwENDWHILE = 272,
     rwENDFOR = 273,
     rwDEFAULT = 274,
     rwFOR = 275,
     rwFOREACH = 276,
     rwFOREACHSTR = 277,
     rwIN = 278,
     rwDATABLOCK = 279,
     rwSWITCH = 280,
     rwCASE = 281,
     rwSWITCHSTR = 282,
     rwCASEOR = 283,
     rwPACKAGE = 284,
     rwNAMESPACE = 285,
     rwCLASS = 286,
     rwASSERT = 287,
     ILLEGAL_TOKEN = 288,
     CHRCONST = 289,
     INTCONST = 290,
     TTAG = 291,
     VAR = 292,
     IDENT = 293,
     TYPEIDENT = 294,
     DOCBLOCK = 295,
     STRATOM = 296,
     TAGATOM = 297,
     FLTCONST = 298,
     opINTNAME = 299,
     opINTNAMER = 300,
     opMINUSMINUS = 301,
     opPLUSPLUS = 302,
     STMT_SEP = 303,
     opSHL = 304,
     opSHR = 305,
     opPLASN = 306,
     opMIASN = 307,
     opMLASN = 308,
     opDVASN = 309,
     opMODASN = 310,
     opANDASN = 311,
     opXORASN = 312,
     opORASN = 313,
     opSLASN = 314,
     opSRASN = 315,
     opCAT = 316,
     opEQ = 317,
     opNE = 318,
     opGE = 319,
     opLE = 320,
     opAND = 321,
     opOR = 322,
     opSTREQ = 323,
     opCOLONCOLON = 324,
     opNTASN = 325,
     opNDASN = 326,
     opMDASN = 327,
     opSTRNE = 328,
     UNARY = 329
   };
#endif
/* Tokens.  */
#define rwDEFINE 258
#define rwENDDEF 259
#define rwDECLARE 260
#define rwDECLARESINGLETON 261
#define rwBREAK 262
#define rwELSE 263
#define rwCONTINUE 264
#define rwGLOBAL 265
#define rwIF 266
#define rwNIL 267
#define rwRETURN 268
#define rwWHILE 269
#define rwDO 270
#define rwENDIF 271
#define rwENDWHILE 272
#define rwENDFOR 273
#define rwDEFAULT 274
#define rwFOR 275
#define rwFOREACH 276
#define rwFOREACHSTR 277
#define rwIN 278
#define rwDATABLOCK 279
#define rwSWITCH 280
#define rwCASE 281
#define rwSWITCHSTR 282
#define rwCASEOR 283
#define rwPACKAGE 284
#define rwNAMESPACE 285
#define rwCLASS 286
#define rwASSERT 287
#define ILLEGAL_TOKEN 288
#define CHRCONST 289
#define INTCONST 290
#define TTAG 291
#define VAR 292
#define IDENT 293
#define TYPEIDENT 294
#define DOCBLOCK 295
#define STRATOM 296
#define TAGATOM 297
#define FLTCONST 298
#define opINTNAME 299
#define opINTNAMER 300
#define opMINUSMINUS 301
#define opPLUSPLUS 302
#define STMT_SEP 303
#define opSHL 304
#define opSHR 305
#define opPLASN 306
#define opMIASN 307
#define opMLASN 308
#define opDVASN 309
#define opMODASN 310
#define opANDASN 311
#define opXORASN 312
#define opORASN 313
#define opSLASN 314
#define opSRASN 315
#define opCAT 316
#define opEQ 317
#define opNE 318
#define opGE 319
#define opLE 320
#define opAND 321
#define opOR 322
#define opSTREQ 323
#define opCOLONCOLON 324
#define opNTASN 325
#define opNDASN 326
#define opMDASN 327
#define opSTRNE 328
#define UNARY 329




/* Copy the first part of user declarations.  */
#line 1 "CMDgram.y"
>>>>>>> omni_engine


// bison --defines=cmdgram.h --verbose -o cmdgram.cpp -p CMD CMDgram.y

// Make sure we don't get gram.h twice.
#define _CMDGRAM_H_

#include <stdlib.h>
#include <stdio.h>
#include "console/console.h"
#include "console/compiler.h"
#include "console/consoleInternal.h"
#include "core/strings/stringFunctions.h"

#ifndef YYDEBUG
#define YYDEBUG 0
#endif

#define YYSSIZE 350

int outtext(char *fmt, ...);
extern int serrors;

#define nil 0
#undef YY_ARGS
#define YY_ARGS(x)   x

int CMDlex();
void CMDerror(char *, ...);

#ifdef alloca
#undef alloca
#endif
#define alloca dMalloc

template< typename T >
struct Token
{
   T value;
   U32 lineNumber;
};

<<<<<<< HEAD
#line 44 "cmdgram.y"

        /* Reserved Word Definitions */
#line 55 "cmdgram.y"

        /* Constants and Identifier Definitions */
#line 69 "cmdgram.y"

        /* Operator Definitions */

#line 82 "cmdgram.y"
typedef union {
=======
#line 44 "CMDgram.y"

        /* Reserved Word Definitions */
#line 55 "CMDgram.y"

        /* Constants and Identifier Definitions */
#line 69 "CMDgram.y"

        /* Operator Definitions */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 82 "CMDgram.y"
{
>>>>>>> omni_engine
   Token< char >           c;
   Token< int >            i;
   Token< const char* >    s;
   Token< char* >          str;
   Token< double >         f;
   StmtNode*               stmt;
   ExprNode*               expr;
   SlotAssignNode*         slist;
   VarNode*                var;
   SlotDecl                slot;
   InternalSlotDecl        intslot;
   ObjectBlockDecl         odcl;
   ObjectDeclNode*         od;
   AssignDecl              asn;
   IfStmtNode*             ifnode;
<<<<<<< HEAD
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		388
#define	YYFLAG		-32768
#define	YYNTBASE	100

#define YYTRANSLATE(x) ((unsigned)(x) <= 329 ? yytranslate[x] : 140)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    64,     2,     2,     2,    54,    53,     2,    55,
    56,    46,    44,    57,    45,    51,    47,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    58,    59,    48,
    50,    49,    96,    65,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    92,     2,    99,    62,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    60,    52,    61,    63,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    93,    94,    95,    97,    98
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     3,     6,     8,    10,    12,    19,    21,    24,
    25,    28,    30,    32,    34,    36,    38,    40,    43,    46,
    49,    53,    56,    61,    68,    70,    79,    90,    91,    93,
    95,    99,   110,   121,   129,   142,   152,   163,   171,   172,
   175,   176,   178,   179,   182,   183,   185,   187,   190,   193,
   197,   201,   203,   211,   219,   224,   232,   238,   240,   244,
   250,   258,   264,   271,   281,   290,   299,   307,   316,   324,
   332,   339,   347,   355,   357,   359,   363,   367,   371,   375,
   379,   383,   387,   391,   395,   398,   401,   403,   409,   413,
   417,   421,   425,   429,   433,   437,   441,   445,   449,   453,
   457,   461,   464,   467,   469,   471,   473,   475,   477,   479,
   481,   483,   485,   490,   498,   502,   509,   513,   517,   519,
   523,   525,   527,   530,   533,   536,   539,   542,   545,   548,
   551,   554,   557,   559,   561,   563,   567,   574,   577,   583,
   586,   590,   596,   601,   608,   615,   620,   627,   628,   630,
   632,   636,   637,   639,   641,   644,   649,   655,   660,   668,
   677,   679
};

static const short yyrhs[] = {   101,
     0,     0,   101,   102,     0,   106,     0,   107,     0,   103,
     0,    29,    38,    60,   104,    61,    59,     0,   107,     0,
   104,   107,     0,     0,   105,   106,     0,   121,     0,   122,
     0,   123,     0,   124,     0,   110,     0,   118,     0,     7,
    59,     0,     9,    59,     0,    13,    59,     0,    13,   126,
    59,     0,   125,    59,     0,    36,    50,   126,    59,     0,
    36,    50,   126,    57,   126,    59,     0,    40,     0,     3,
    38,    55,   108,    56,    60,   105,    61,     0,     3,    38,
    91,    38,    55,   108,    56,    60,   105,    61,     0,     0,
   109,     0,    37,     0,   109,    57,    37,     0,    24,   129,
    55,   126,   112,    56,    60,   136,    61,    59,     0,     5,
   129,    55,   113,   112,   114,    56,    60,   115,    61,     0,
     5,   129,    55,   113,   112,   114,    56,     0,     5,   129,
    55,    92,   113,    99,   112,   114,    56,    60,   115,    61,
     0,     5,   129,    55,    92,   113,    99,   112,   114,    56,
     0,     6,   129,    55,   113,   112,   114,    56,    60,   115,
    61,     0,     6,   129,    55,   113,   112,   114,    56,     0,
     0,    58,    38,     0,     0,   126,     0,     0,    57,   135,
     0,     0,   137,     0,   116,     0,   137,   116,     0,   111,
    59,     0,   116,   111,    59,     0,    60,   105,    61,     0,
   106,     0,    25,    55,   126,    56,    60,   119,    61,     0,
    27,    55,   126,    56,    60,   119,    61,     0,    26,   120,
    58,   105,     0,    26,   120,    58,   105,    19,    58,   105,
     0,    26,   120,    58,   105,   119,     0,   126,     0,   120,
    28,   126,     0,    11,    55,   126,    56,   117,     0,    11,
    55,   126,    56,   117,     8,   117,     0,    14,    55,   126,
    56,   117,     0,    15,   117,    14,    55,   126,    56,     0,
    20,    55,   126,    59,   126,    59,   126,    56,   117,     0,
    20,    55,   126,    59,   126,    59,    56,   117,     0,    20,
    55,   126,    59,    59,   126,    56,   117,     0,    20,    55,
   126,    59,    59,    56,   117,     0,    20,    55,    59,   126,
    59,   126,    56,   117,     0,    20,    55,    59,   126,    59,
    56,   117,     0,    20,    55,    59,    59,   126,    56,   117,
     0,    20,    55,    59,    59,    56,   117,     0,    21,    55,
    37,    23,   126,    56,   117,     0,    22,    55,    37,    23,
   126,    56,   117,     0,   131,     0,   131,     0,    55,   126,
    56,     0,   126,    62,   126,     0,   126,    54,   126,     0,
   126,    53,   126,     0,   126,    52,   126,     0,   126,    44,
   126,     0,   126,    45,   126,     0,   126,    46,   126,     0,
   126,    47,   126,     0,    45,   126,     0,    46,   126,     0,
    36,     0,   126,    96,   126,    58,   126,     0,   126,    48,
   126,     0,   126,    49,   126,     0,   126,    86,   126,     0,
   126,    87,   126,     0,   126,    84,   126,     0,   126,    85,
   126,     0,   126,    89,   126,     0,   126,    71,   126,     0,
   126,    72,   126,     0,   126,    88,   126,     0,   126,    90,
   126,     0,   126,    97,   126,     0,   126,    65,   126,     0,
    64,   126,     0,    63,   126,     0,    42,     0,    43,     0,
    35,     0,     7,     0,   127,     0,   128,     0,    38,     0,
    41,     0,    37,     0,    37,    92,   139,    99,     0,     3,
    55,   108,    56,    60,   105,    61,     0,   126,    51,    38,
     0,   126,    51,    38,    92,   139,    99,     0,   126,    66,
   129,     0,   126,    67,   129,     0,    38,     0,    55,   126,
    56,     0,    69,     0,    68,     0,    73,   126,     0,    74,
   126,     0,    75,   126,     0,    76,   126,     0,    77,   126,
     0,    78,   126,     0,    79,   126,     0,    80,   126,     0,
    81,   126,     0,    82,   126,     0,   132,     0,   133,     0,
   111,     0,    37,    50,   126,     0,    37,    92,   139,    99,
    50,   126,     0,    37,   130,     0,    37,    92,   139,    99,
   130,     0,   127,   130,     0,   127,    50,   126,     0,   127,
    50,    60,   135,    61,     0,    38,    55,   134,    56,     0,
    38,    91,    38,    55,   134,    56,     0,   126,    51,    38,
    55,   134,    56,     0,    32,    55,   126,    56,     0,    32,
    55,   126,    57,    41,    56,     0,     0,   135,     0,   126,
     0,   135,    57,   126,     0,     0,   137,     0,   138,     0,
   137,   138,     0,    38,    50,   126,    59,     0,    39,    38,
    50,   126,    59,     0,    24,    50,   126,    59,     0,    38,
    92,   139,    99,    50,   126,    59,     0,    39,    38,    92,
   139,    99,    50,   126,    59,     0,   126,     0,   139,    57,
   126,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   161,   166,   168,   173,   175,   177,   182,   187,   189,   194,
   196,   201,   202,   203,   204,   205,   206,   207,   209,   211,
   213,   215,   217,   219,   221,   226,   228,   233,   235,   240,
   242,   247,   252,   254,   256,   258,   260,   262,   267,   269,
   274,   276,   281,   283,   288,   290,   292,   294,   299,   301,
   306,   308,   313,   315,   320,   322,   324,   329,   331,   336,
   338,   343,   345,   350,   352,   354,   356,   358,   360,   362,
   364,   369,   371,   376,   381,   383,   385,   387,   389,   391,
   393,   395,   397,   399,   401,   403,   405,   407,   409,   411,
   413,   415,   417,   419,   421,   423,   425,   427,   429,   431,
   433,   435,   437,   439,   441,   443,   445,   447,   449,   451,
   453,   455,   457,   459,   477,   479,   484,   486,   491,   493,
   498,   500,   502,   504,   506,   508,   510,   512,   514,   516,
   518,   520,   525,   527,   529,   531,   533,   535,   537,   539,
   541,   543,   548,   550,   552,   557,   559,   564,   566,   571,
   573,   578,   580,   585,   587,   592,   594,   596,   598,   600,
   605,   607
};

static const char * const yytname[] = {   "$","error","$undefined.","rwDEFINE",
"rwENDDEF","rwDECLARE","rwDECLARESINGLETON","rwBREAK","rwELSE","rwCONTINUE",
"rwGLOBAL","rwIF","rwNIL","rwRETURN","rwWHILE","rwDO","rwENDIF","rwENDWHILE",
"rwENDFOR","rwDEFAULT","rwFOR","rwFOREACH","rwFOREACHSTR","rwIN","rwDATABLOCK",
"rwSWITCH","rwCASE","rwSWITCHSTR","rwCASEOR","rwPACKAGE","rwNAMESPACE","rwCLASS",
"rwASSERT","ILLEGAL_TOKEN","CHRCONST","INTCONST","TTAG","VAR","IDENT","TYPEIDENT",
"DOCBLOCK","STRATOM","TAGATOM","FLTCONST","'+'","'-'","'*'","'/'","'<'","'>'",
"'='","'.'","'|'","'&'","'%'","'('","')'","','","':'","';'","'{'","'}'","'^'",
"'~'","'!'","'@'","opINTNAME","opINTNAMER","opMINUSMINUS","opPLUSPLUS","STMT_SEP",
"opSHL","opSHR","opPLASN","opMIASN","opMLASN","opDVASN","opMODASN","opANDASN",
"opXORASN","opORASN","opSLASN","opSRASN","opCAT","opEQ","opNE","opGE","opLE",
"opAND","opOR","opSTREQ","opCOLONCOLON","'['","opMDASN","opNDASN","opNTASN",
"'?'","opSTRNE","UNARY","']'","start","decl_list","decl","package_decl","fn_decl_list",
"statement_list","stmt","fn_decl_stmt","var_list_decl","var_list","datablock_decl",
"object_decl","parent_block","object_name","object_args","object_declare_block",
"object_decl_list","stmt_block","switch_stmt","case_block","case_expr","if_stmt",
"while_stmt","for_stmt","foreach_stmt","expression_stmt","expr","slot_acc","intslot_acc",
"class_name_expr","assign_op_struct","stmt_expr","funcall_expr","assert_expr",
"expr_list_decl","expr_list","slot_assign_list_opt","slot_assign_list","slot_assign",
"aidx_expr",""
};
#endif

static const short yyr1[] = {     0,
   100,   101,   101,   102,   102,   102,   103,   104,   104,   105,
   105,   106,   106,   106,   106,   106,   106,   106,   106,   106,
   106,   106,   106,   106,   106,   107,   107,   108,   108,   109,
   109,   110,   111,   111,   111,   111,   111,   111,   112,   112,
   113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
   117,   117,   118,   118,   119,   119,   119,   120,   120,   121,
   121,   122,   122,   123,   123,   123,   123,   123,   123,   123,
   123,   124,   124,   125,   126,   126,   126,   126,   126,   126,
   126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
   126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
   126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
   126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
   130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
   130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
   131,   131,   132,   132,   132,   133,   133,   134,   134,   135,
   135,   136,   136,   137,   137,   138,   138,   138,   138,   138,
   139,   139
};

static const short yyr2[] = {     0,
     1,     0,     2,     1,     1,     1,     6,     1,     2,     0,
     2,     1,     1,     1,     1,     1,     1,     2,     2,     2,
     3,     2,     4,     6,     1,     8,    10,     0,     1,     1,
     3,    10,    10,     7,    12,     9,    10,     7,     0,     2,
     0,     1,     0,     2,     0,     1,     1,     2,     2,     3,
     3,     1,     7,     7,     4,     7,     5,     1,     3,     5,
     7,     5,     6,     9,     8,     8,     7,     8,     7,     7,
     6,     7,     7,     1,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     2,     2,     1,     5,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     4,     7,     3,     6,     3,     3,     1,     3,
     1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     1,     1,     1,     3,     6,     2,     5,     2,
     3,     5,     4,     6,     6,     4,     6,     0,     1,     1,
     3,     0,     1,     1,     2,     4,     5,     4,     7,     8,
     1,     3
};

static const short yydefact[] = {     2,
     1,     0,     0,     0,   107,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   106,    87,
   112,   110,    25,   111,   104,   105,     0,     0,     0,     0,
     0,     3,     6,     4,     5,    16,   135,    17,    12,    13,
    14,    15,     0,     0,   108,   109,    75,   133,   134,     0,
    28,   119,     0,     0,     0,    18,    19,     0,     0,   107,
    87,    20,     0,    75,     0,    10,    52,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   122,   121,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   138,   148,     0,    85,    86,     0,   103,   102,    22,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   140,    28,     0,    30,
     0,    29,     0,    41,    41,     0,    21,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   136,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   161,     0,   150,     0,   149,     0,    76,    81,    82,
    83,    84,    89,    90,   115,    80,    79,    78,    77,   101,
   117,   118,    96,    97,    93,    94,    91,    92,    98,    95,
    99,     0,   100,     0,   141,     0,     0,     0,     0,   120,
    41,    39,    42,    39,     0,     0,    51,    11,     0,     0,
     0,     0,     0,     0,    39,     0,     0,     0,     0,     8,
   146,     0,     0,    23,     0,   113,   143,     0,   148,   148,
     0,     0,     0,     0,    28,    10,    31,     0,     0,    43,
    43,    60,    62,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     9,     0,     0,   162,     0,
   139,   151,     0,     0,     0,    88,   142,    10,     0,     0,
    39,    40,     0,     0,     0,     0,    63,    71,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     7,   147,    24,   137,   144,   145,   116,     0,     0,   114,
    43,    44,    34,    38,    61,    70,    69,     0,    67,     0,
     0,     0,    72,    73,   152,     0,    58,    53,    54,    26,
    10,     0,    45,    45,    68,    66,    65,     0,     0,     0,
     0,     0,   153,   154,     0,    10,     0,    36,     0,     0,
    47,    46,     0,    64,     0,     0,     0,     0,     0,   155,
    59,    55,    27,    45,    49,    33,     0,    48,    37,     0,
     0,     0,     0,     0,    32,     0,    57,     0,    50,   158,
   156,     0,     0,     0,    10,    35,     0,   157,     0,    56,
     0,     0,   159,     0,   160,     0,     0,     0
};

static const short yydefgoto[] = {   386,
     1,    32,    33,   219,   139,    67,    35,   131,   132,    36,
    37,   240,   202,   274,   340,   341,    68,    38,   289,   316,
    39,    40,    41,    42,    43,    44,    45,    46,    54,    92,
    64,    48,    49,   165,   166,   332,   342,   334,   163
};

static const short yypact[] = {-32768,
   210,   -14,    -2,    -2,   -38,   -28,   -11,   829,     4,   418,
    13,    64,    69,    -2,    70,    71,    85,    72,-32768,    52,
   462,   -40,-32768,-32768,-32768,-32768,  1225,  1225,  1225,  1225,
  1225,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    75,  2688,   560,-32768,    76,-32768,-32768,   -22,
    92,-32768,  1225,    81,    86,-32768,-32768,  1225,    88,-32768,
-32768,-32768,  1338,-32768,  1225,-32768,-32768,   116,   873,   103,
   107,    90,  1225,  1225,    96,  1225,  1225,  1225,-32768,-32768,
  1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,  1225,
  1225,-32768,  1225,    93,    30,    30,  1392,    30,    30,-32768,
  1225,  1225,  1225,  1225,  1225,  1225,   108,  1225,  1225,  1225,
  1225,  1225,    -2,    -2,  1225,  1225,  1225,  1225,  1225,  1225,
  1225,  1225,  1225,  1225,  1225,   917,-32768,    92,   110,-32768,
    98,    95,  1446,    20,  1225,  1500,-32768,  1554,   550,   105,
   961,  1608,   138,   139,  1225,  1662,  1716,   164,  1230,  1284,
  2688,  2688,  2688,  2688,  2688,  2688,  2688,  2688,  2688,  2688,
  2688,  2688,   -39,  2688,   117,   115,   119,-32768,    47,    47,
    30,    30,  2945,  2945,   -25,  2829,  2887,    30,  2858,   257,
-32768,-32768,   421,   421,  2916,  2916,  2945,  2945,  2800,  2771,
   257,  1770,   257,  1225,  2688,   121,   120,   118,   151,-32768,
  1225,   133,  2688,   133,   418,   418,-32768,-32768,  1225,  1005,
  1824,  1049,  1225,  1225,  1878,   132,   134,   155,    11,-32768,
-32768,   154,  1225,-32768,  1225,  2950,-32768,  1225,  1225,  1225,
  1225,  1225,   -15,   136,    92,-32768,-32768,   101,   159,   141,
   141,   193,-32768,  1932,   418,  1986,  1093,  1137,  2040,  2094,
  2148,   146,   177,   177,   147,-32768,   153,  2202,  2688,  1225,
-32768,  2688,   156,   158,   -35,  2742,-32768,-32768,   162,   650,
   133,-32768,  1225,   166,   170,   418,-32768,-32768,   418,   418,
  2256,   418,  2310,  1181,   418,   418,   150,  1225,   167,   168,
-32768,-32768,-32768,  2688,-32768,-32768,-32768,   695,   160,-32768,
   141,   115,   173,   176,-32768,-32768,-32768,   418,-32768,   418,
   418,  2364,-32768,-32768,    68,    12,  2688,-32768,-32768,-32768,
-32768,   171,    94,    94,-32768,-32768,-32768,   418,   161,   -21,
   200,   179,    68,-32768,  1225,-32768,   740,   181,   184,   188,
    99,    94,   196,-32768,  1225,  1225,  1225,   -18,   195,-32768,
  2688,   144,-32768,    94,-32768,-32768,   199,    99,-32768,  2418,
  2472,    -9,  1225,  1225,-32768,   201,-32768,   202,-32768,-32768,
-32768,   211,  2526,    -8,-32768,-32768,  1225,-32768,   212,   785,
  2580,  1225,-32768,  2634,-32768,   260,   264,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,  -233,     0,  -132,  -120,-32768,-32768,
  -304,  -176,  -123,  -228,  -277,   -76,  -200,-32768,  -243,-32768,
-32768,-32768,-32768,-32768,-32768,   285,-32768,-32768,     3,   -43,
    -1,-32768,-32768,  -108,  -184,-32768,   -48,  -299,  -227
};


#define	YYLAST		3042


static const short yytable[] = {    47,
    34,   127,   270,   265,   242,   243,    55,   196,    47,   233,
   290,   204,   275,   218,    93,   220,    72,   225,   339,   339,
    56,   225,    59,    50,     3,     4,    60,   241,   346,   230,
    57,   363,   128,   350,   298,    52,   357,   339,   252,   335,
    51,   228,   350,    58,   278,   267,   343,   225,   225,   339,
    94,    18,    53,   357,    19,    61,    21,    22,    65,   226,
    24,    25,    26,   297,    27,    28,   231,    69,   129,   336,
   347,   255,   322,   364,    29,   305,   368,   238,   306,   307,
   107,   309,    30,    31,   313,   314,   256,   337,   302,   372,
   379,   329,   103,   104,   301,   113,   114,   107,     3,     4,
   110,    77,   352,     3,     4,   330,   331,   325,   367,   326,
   327,   201,   113,   114,   269,   181,   182,   329,    70,   362,
   263,   264,    75,    71,    73,    74,    76,   344,   130,   140,
   167,   330,   331,   100,   -74,   134,   374,    47,   208,   143,
   135,   380,    51,   144,   145,   175,    59,   197,     3,     4,
     5,   199,     6,   198,     7,   148,     8,     9,    10,   209,
   213,   214,   366,    11,    12,    13,   218,    14,    15,   288,
    16,   228,   227,   229,   235,    18,   234,   236,    19,    20,
    21,    22,   261,    23,    24,    25,    26,   237,    27,    28,
   239,   253,    50,   254,   257,   268,   272,   273,    29,   271,
   276,   287,   288,    47,    47,   291,    30,    31,   292,   315,
   345,   295,     2,   296,     3,     4,     5,   299,     6,   321,
     7,   303,     8,     9,    10,   304,   338,   318,   319,    11,
    12,    13,   323,    14,    15,   324,    16,   348,    17,   349,
   354,    18,   355,    47,    19,    20,    21,    22,   356,    23,
    24,    25,    26,   365,    27,    28,   359,   369,   375,   387,
   377,   382,   376,   388,    29,   358,   333,     0,    47,   208,
     0,     0,    30,    31,    47,     0,     0,    47,    47,     0,
    47,     0,     0,    47,    47,     0,     0,     0,     0,     0,
     0,     0,    63,     0,     0,     0,    47,   208,     0,     0,
   101,   102,   103,   104,     0,     0,    47,   107,    47,    47,
   110,    95,    96,    97,    98,    99,     0,     0,     0,     0,
     0,     0,   113,   114,     0,     0,    47,   115,   116,     0,
     0,     0,     0,     0,     0,    47,   208,   133,     0,     0,
     0,     0,   136,     0,     0,     0,     0,     0,     0,   138,
    47,   208,     0,   142,     0,     0,     0,   146,   147,     0,
   149,   150,   151,     0,     0,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,     0,   164,    47,   208,
     0,     0,     0,     0,     0,   169,   170,   171,   172,   173,
   174,     0,   176,   177,   178,   179,   180,     0,     0,   183,
   184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
   195,     0,     0,     0,     0,     0,     0,     0,   203,   203,
    59,     0,     3,     4,     5,   211,     6,     0,     7,   215,
     8,     9,    10,     0,     0,     0,     0,    11,    12,    13,
     0,    14,    15,     0,    16,     0,     0,     0,     0,    18,
     0,     0,    19,    20,    21,    22,     0,    23,    24,    25,
    26,     0,    27,    28,   101,   102,   103,   104,     0,     0,
     0,   107,    29,     0,   110,     0,     0,    66,   164,     0,
    30,    31,     0,     0,     0,   203,   113,   114,     0,     0,
     0,     0,     0,   244,   246,     0,   249,   250,   251,     0,
     0,     0,     0,     0,     0,     0,     0,   258,     0,   259,
     0,    78,   262,   164,   164,   162,   266,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
    80,   281,   283,     0,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,   294,     0,     0,     0,     0,     0,
     0,     0,    59,    91,     3,     4,     5,   164,     6,     0,
     7,     0,     8,     9,    10,     0,     0,     0,   312,    11,
    12,    13,   317,    14,    15,     0,    16,     0,     0,     0,
     0,    18,     0,     0,    19,    20,    21,    22,     0,    23,
    24,    25,    26,     0,    27,    28,     0,     0,     0,     0,
     0,     0,     0,     0,    29,     0,     0,     0,     0,   126,
   207,     0,    30,    31,     0,     0,     0,     0,     0,   351,
     0,     0,     0,     0,     0,     0,     0,    79,    80,   360,
   361,   162,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,     0,     0,     0,     0,     0,   373,   162,     0,
     0,     0,    59,     0,     3,     4,     5,     0,     6,     0,
     7,   381,     8,     9,    10,     0,   384,     0,     0,    11,
    12,    13,     0,    14,    15,     0,    16,     0,     0,     0,
     0,    18,     0,     0,    19,    20,    21,    22,     0,    23,
    24,    25,    26,     0,    27,    28,     0,    59,     0,     3,
     4,     5,     0,     6,    29,     7,     0,     8,     9,    10,
   300,     0,    30,    31,    11,    12,    13,     0,    14,    15,
     0,    16,     0,     0,     0,     0,    18,     0,     0,    19,
    20,    21,    22,     0,    23,    24,    25,    26,     0,    27,
    28,     0,    59,     0,     3,     4,     5,     0,     6,    29,
     7,     0,     8,     9,    10,   320,     0,    30,    31,    11,
    12,    13,     0,    14,    15,     0,    16,     0,     0,     0,
     0,    18,     0,     0,    19,    20,    21,    22,     0,    23,
    24,    25,    26,     0,    27,    28,     0,    59,     0,     3,
     4,     5,     0,     6,    29,     7,     0,     8,     9,    10,
   353,     0,    30,    31,    11,    12,    13,     0,    14,    15,
     0,    16,     0,     0,     0,     0,    18,     0,     0,    19,
    20,    21,    22,     0,    23,    24,    25,    26,     0,    27,
    28,    59,     0,     3,     4,    60,     0,     0,     0,    29,
     0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    18,     0,     0,    19,    61,    21,    22,     0,     0,    24,
    25,    26,     0,    27,    28,    59,     0,     3,     4,    60,
     0,     0,     0,    29,     0,     0,     0,    62,     0,     0,
     0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    18,     0,     0,    19,    61,    21,
    22,     0,     0,    24,    25,    26,     0,    27,    28,    59,
     0,     3,     4,    60,     0,     0,     0,    29,     0,     0,
     0,   141,     0,     0,     0,    30,    31,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
     0,    19,    61,    21,    22,     0,     0,    24,    25,    26,
     0,    27,    28,    59,     0,     3,     4,    60,     0,     0,
     0,    29,     0,     0,     0,     0,   194,     0,     0,    30,
    31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    18,     0,     0,    19,    61,    21,    22,     0,
     0,    24,    25,    26,     0,    27,    28,    59,     0,     3,
     4,    60,     0,     0,     0,    29,     0,     0,     0,   210,
     0,     0,     0,    30,    31,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    18,     0,     0,    19,
    61,    21,    22,     0,     0,    24,    25,    26,     0,    27,
    28,    59,     0,     3,     4,    60,     0,     0,     0,    29,
   245,     0,     0,     0,     0,     0,     0,    30,    31,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    18,     0,     0,    19,    61,    21,    22,     0,     0,    24,
    25,    26,     0,    27,    28,    59,     0,     3,     4,    60,
     0,     0,     0,    29,     0,     0,     0,   248,     0,     0,
     0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    18,     0,     0,    19,    61,    21,
    22,     0,     0,    24,    25,    26,     0,    27,    28,    59,
     0,     3,     4,    60,     0,     0,     0,    29,   280,     0,
     0,     0,     0,     0,     0,    30,    31,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
     0,    19,    61,    21,    22,     0,     0,    24,    25,    26,
     0,    27,    28,    59,     0,     3,     4,    60,     0,     0,
     0,    29,   282,     0,     0,     0,     0,     0,     0,    30,
    31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    18,     0,     0,    19,    61,    21,    22,     0,
     0,    24,    25,    26,     0,    27,    28,    59,     0,     3,
     4,    60,     0,     0,     0,    29,   311,     0,     0,     0,
     0,     0,     0,    30,    31,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    18,     0,     0,    19,
    61,    21,    22,     0,     0,    24,    25,    26,     0,    27,
    28,     0,     0,   101,   102,   103,   104,   105,   106,    29,
   107,   108,   109,   110,     0,   221,   222,    30,    31,     0,
     0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
   115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
     0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
   104,   105,   106,     0,   107,   108,   109,   110,     0,     0,
   223,     0,   224,     0,     0,   111,     0,     0,   112,   113,
   114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
   120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
   125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
   109,   110,     0,     0,     0,     0,   137,     0,     0,   111,
     0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
     0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
   106,     0,   107,   108,   109,   110,     0,   168,     0,     0,
     0,     0,     0,   111,     0,     0,   112,   113,   114,     0,
     0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
   122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
   102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
     0,   200,     0,     0,     0,     0,     0,   111,     0,     0,
   112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
   118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
     0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
   107,   108,   109,   110,     0,   205,     0,     0,     0,     0,
     0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
   115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
     0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
   104,   105,   106,     0,   107,   108,   109,   110,     0,   206,
     0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
   114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
   120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
   125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
   109,   110,     0,     0,     0,     0,   212,     0,     0,   111,
     0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
     0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
   106,     0,   107,   108,   109,   110,     0,   216,     0,     0,
     0,     0,     0,   111,     0,     0,   112,   113,   114,     0,
     0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
   122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
   102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
     0,   217,     0,     0,     0,     0,     0,   111,     0,     0,
   112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
   118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
     0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
   107,   108,   109,   110,     0,     0,     0,   232,     0,     0,
     0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
   115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
     0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
   104,   105,   106,     0,   107,   108,   109,   110,     0,     0,
     0,     0,   247,     0,     0,   111,     0,     0,   112,   113,
   114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
   120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
   125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
   109,   110,     0,     0,     0,   239,     0,     0,     0,   111,
     0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
     0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
   106,     0,   107,   108,   109,   110,     0,   277,     0,     0,
     0,     0,     0,   111,     0,     0,   112,   113,   114,     0,
     0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
   122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
   102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
     0,   279,     0,     0,     0,     0,     0,   111,     0,     0,
   112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
   118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
     0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
   107,   108,   109,   110,     0,     0,     0,     0,   284,     0,
     0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
   115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
     0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
   104,   105,   106,     0,   107,   108,   109,   110,     0,   285,
     0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
   114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
   120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
   125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
   109,   110,     0,   286,     0,     0,     0,     0,     0,   111,
     0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
     0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
   106,     0,   107,   108,   109,   110,     0,     0,     0,     0,
   293,     0,     0,   111,     0,     0,   112,   113,   114,     0,
     0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
   122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
   102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
     0,   308,     0,     0,     0,     0,     0,   111,     0,     0,
   112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
   118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
     0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
   107,   108,   109,   110,     0,   310,     0,     0,     0,     0,
     0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
   115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
     0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
   104,   105,   106,     0,   107,   108,   109,   110,     0,   328,
     0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
   114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
   120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
   125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
   109,   110,     0,     0,     0,     0,   370,     0,     0,   111,
     0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
     0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
   106,     0,   107,   108,   109,   110,     0,     0,     0,     0,
   371,     0,     0,   111,     0,     0,   112,   113,   114,     0,
     0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
   122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
   102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
     0,     0,     0,     0,   378,     0,     0,   111,     0,     0,
   112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
   118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
     0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
   107,   108,   109,   110,     0,     0,     0,     0,   383,     0,
     0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
   115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
     0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
   104,   105,   106,     0,   107,   108,   109,   110,     0,     0,
     0,     0,   385,     0,     0,   111,     0,     0,   112,   113,
   114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
   120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
   125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
   109,   110,     0,     0,     0,     0,     0,     0,     0,   111,
     0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
     0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
   106,     0,   107,   108,   109,   110,     0,     0,     0,     0,
     0,     0,     0,   111,     0,     0,   112,   113,   114,     0,
     0,     0,   115,   116,   101,   102,   103,   104,   105,   106,
     0,   107,   108,   109,   110,   117,   118,   119,   120,   121,
   122,   123,   111,     0,     0,   112,   113,   114,   125,     0,
     0,   115,   116,   101,   102,   103,   104,   105,   106,     0,
   107,   108,   109,   110,   117,   118,   119,   120,   121,     0,
   123,   111,     0,     0,   112,   113,   114,   125,     0,     0,
   115,   116,   101,   102,   103,   104,   105,   106,     0,   107,
     0,   109,   110,   117,   118,   119,   120,     0,     0,   123,
   111,     0,     0,   112,   113,   114,   125,     0,     0,   115,
   116,   101,   102,   103,   104,   105,   106,     0,   107,     0,
   109,   110,   117,   118,   119,   120,     0,     0,   123,     0,
     0,     0,   112,   113,   114,   125,     0,     0,   115,   116,
   101,   102,   103,   104,   105,   106,     0,   107,     0,     0,
   110,   117,   118,   119,   120,     0,     0,   123,     0,     0,
     0,   112,   113,   114,   125,     0,     0,   115,   116,   101,
   102,   103,   104,   105,   106,     0,   107,     0,     0,   110,
   117,   118,   119,   120,     0,     0,   123,     0,     0,     0,
   112,   113,   114,   125,     0,     0,   115,   116,   101,   102,
   103,   104,     0,     0,     0,   107,     0,     0,   110,   260,
     0,   119,   120,     0,     0,   123,     0,     0,     0,   112,
   113,   114,   125,     0,     0,   115,   116,    79,    80,     0,
     0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,     0,     0,   123,     0,     0,     0,     0,     0,
     0,   125
};

static const short yycheck[] = {     1,
     1,    45,   236,   231,   205,   206,     4,   128,    10,   194,
   254,   135,   241,     3,    55,   148,    14,    57,   323,   324,
    59,    57,     3,    38,     5,     6,     7,   204,    50,    55,
    59,    50,    55,   333,   268,    38,   341,   342,   215,    28,
    55,    57,   342,    55,   245,    61,   324,    57,    57,   354,
    91,    32,    55,   358,    35,    36,    37,    38,    55,    99,
    41,    42,    43,    99,    45,    46,    92,    55,    91,    58,
    92,    61,   301,    92,    55,   276,   354,   201,   279,   280,
    51,   282,    63,    64,   285,   286,   219,   321,   273,    99,
    99,    24,    46,    47,   271,    66,    67,    51,     5,     6,
    54,    50,   336,     5,     6,    38,    39,   308,   352,   310,
   311,    92,    66,    67,   235,   113,   114,    24,    55,   347,
   229,   230,    38,    55,    55,    55,    55,   328,    37,    14,
    38,    38,    39,    59,    59,    55,   364,   139,   139,    37,
    55,   375,    55,    37,    55,    38,     3,    38,     5,     6,
     7,    57,     9,    56,    11,    60,    13,    14,    15,    55,
    23,    23,    19,    20,    21,    22,     3,    24,    25,    26,
    27,    57,    56,    55,    55,    32,    56,    60,    35,    36,
    37,    38,   226,    40,    41,    42,    43,    37,    45,    46,
    58,    60,    38,    60,    41,    60,    38,    57,    55,    99,
     8,    56,    26,   205,   206,    59,    63,    64,    56,    60,
    50,    56,     3,    56,     5,     6,     7,    56,     9,    60,
    11,    56,    13,    14,    15,    56,    56,    61,    61,    20,
    21,    22,    60,    24,    25,    60,    27,    38,    29,    61,
    60,    32,    59,   245,    35,    36,    37,    38,    61,    40,
    41,    42,    43,    59,    45,    46,    61,    59,    58,     0,
    50,    50,    61,     0,    55,   342,   315,    -1,   270,   270,
    -1,    -1,    63,    64,   276,    -1,    -1,   279,   280,    -1,
   282,    -1,    -1,   285,   286,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     8,    -1,    -1,    -1,   298,   298,    -1,    -1,
    44,    45,    46,    47,    -1,    -1,   308,    51,   310,   311,
    54,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
    -1,    -1,    66,    67,    -1,    -1,   328,    71,    72,    -1,
    -1,    -1,    -1,    -1,    -1,   337,   337,    53,    -1,    -1,
    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,
   352,   352,    -1,    69,    -1,    -1,    -1,    73,    74,    -1,
    76,    77,    78,    -1,    -1,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    -1,    93,   380,   380,
    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
   106,    -1,   108,   109,   110,   111,   112,    -1,    -1,   115,
   116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     3,    -1,     5,     6,     7,   141,     9,    -1,    11,   145,
    13,    14,    15,    -1,    -1,    -1,    -1,    20,    21,    22,
    -1,    24,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,
    -1,    -1,    35,    36,    37,    38,    -1,    40,    41,    42,
    43,    -1,    45,    46,    44,    45,    46,    47,    -1,    -1,
    -1,    51,    55,    -1,    54,    -1,    -1,    60,   194,    -1,
    63,    64,    -1,    -1,    -1,   201,    66,    67,    -1,    -1,
    -1,    -1,    -1,   209,   210,    -1,   212,   213,   214,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,
    -1,    50,   228,   229,   230,   231,   232,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
    69,   247,   248,    -1,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,   260,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     3,    92,     5,     6,     7,   273,     9,    -1,
    11,    -1,    13,    14,    15,    -1,    -1,    -1,   284,    20,
    21,    22,   288,    24,    25,    -1,    27,    -1,    -1,    -1,
    -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
    41,    42,    43,    -1,    45,    46,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    50,
    61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,   335,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,   345,
   346,   347,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,
    -1,    -1,     3,    -1,     5,     6,     7,    -1,     9,    -1,
    11,   377,    13,    14,    15,    -1,   382,    -1,    -1,    20,
    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    -1,
    -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
    41,    42,    43,    -1,    45,    46,    -1,     3,    -1,     5,
     6,     7,    -1,     9,    55,    11,    -1,    13,    14,    15,
    61,    -1,    63,    64,    20,    21,    22,    -1,    24,    25,
    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
    36,    37,    38,    -1,    40,    41,    42,    43,    -1,    45,
    46,    -1,     3,    -1,     5,     6,     7,    -1,     9,    55,
    11,    -1,    13,    14,    15,    61,    -1,    63,    64,    20,
    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    -1,
    -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
    41,    42,    43,    -1,    45,    46,    -1,     3,    -1,     5,
     6,     7,    -1,     9,    55,    11,    -1,    13,    14,    15,
    61,    -1,    63,    64,    20,    21,    22,    -1,    24,    25,
    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
    36,    37,    38,    -1,    40,    41,    42,    43,    -1,    45,
    46,     3,    -1,     5,     6,     7,    -1,    -1,    -1,    55,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,
    42,    43,    -1,    45,    46,     3,    -1,     5,     6,     7,
    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,    -1,
    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    37,
    38,    -1,    -1,    41,    42,    43,    -1,    45,    46,     3,
    -1,     5,     6,     7,    -1,    -1,    -1,    55,    -1,    -1,
    -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
    -1,    45,    46,     3,    -1,     5,     6,     7,    -1,    -1,
    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,
    -1,    41,    42,    43,    -1,    45,    46,     3,    -1,     5,
     6,     7,    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,
    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
    36,    37,    38,    -1,    -1,    41,    42,    43,    -1,    45,
    46,     3,    -1,     5,     6,     7,    -1,    -1,    -1,    55,
    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,
    42,    43,    -1,    45,    46,     3,    -1,     5,     6,     7,
    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,    -1,
    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    37,
    38,    -1,    -1,    41,    42,    43,    -1,    45,    46,     3,
    -1,     5,     6,     7,    -1,    -1,    -1,    55,    56,    -1,
    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
    -1,    45,    46,     3,    -1,     5,     6,     7,    -1,    -1,
    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,
    -1,    41,    42,    43,    -1,    45,    46,     3,    -1,     5,
     6,     7,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,
    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
    36,    37,    38,    -1,    -1,    41,    42,    43,    -1,    45,
    46,    -1,    -1,    44,    45,    46,    47,    48,    49,    55,
    51,    52,    53,    54,    -1,    56,    57,    63,    64,    -1,
    -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
    -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
    47,    48,    49,    -1,    51,    52,    53,    54,    -1,    -1,
    57,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    66,
    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
    97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
    53,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
    -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
    49,    -1,    51,    52,    53,    54,    -1,    56,    -1,    -1,
    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
    89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
    45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
    65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
    -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
    51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
    -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
    -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
    47,    48,    49,    -1,    51,    52,    53,    54,    -1,    56,
    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
    97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
    53,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
    -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
    49,    -1,    51,    52,    53,    54,    -1,    56,    -1,    -1,
    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
    89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
    45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
    65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
    -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
    51,    52,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,
    -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
    -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
    47,    48,    49,    -1,    51,    52,    53,    54,    -1,    -1,
    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    66,
    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
    97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,
    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
    -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
    49,    -1,    51,    52,    53,    54,    -1,    56,    -1,    -1,
    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
    89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
    45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
    65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
    -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
    51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    -1,
    -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
    -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
    47,    48,    49,    -1,    51,    52,    53,    54,    -1,    56,
    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
    97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,
    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
    -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
    49,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
    59,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
    89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
    45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
    65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
    -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
    51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
    -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
    -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
    47,    48,    49,    -1,    51,    52,    53,    54,    -1,    56,
    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
    97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
    53,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
    -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
    49,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
    59,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
    89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
    45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
    65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
    -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
    51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    -1,
    -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
    -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
    47,    48,    49,    -1,    51,    52,    53,    54,    -1,    -1,
    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    66,
    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
    97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
    -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
    -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
    49,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
    -1,    -1,    71,    72,    44,    45,    46,    47,    48,    49,
    -1,    51,    52,    53,    54,    84,    85,    86,    87,    88,
    89,    90,    62,    -1,    -1,    65,    66,    67,    97,    -1,
    -1,    71,    72,    44,    45,    46,    47,    48,    49,    -1,
    51,    52,    53,    54,    84,    85,    86,    87,    88,    -1,
    90,    62,    -1,    -1,    65,    66,    67,    97,    -1,    -1,
    71,    72,    44,    45,    46,    47,    48,    49,    -1,    51,
    -1,    53,    54,    84,    85,    86,    87,    -1,    -1,    90,
    62,    -1,    -1,    65,    66,    67,    97,    -1,    -1,    71,
    72,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
    53,    54,    84,    85,    86,    87,    -1,    -1,    90,    -1,
    -1,    -1,    65,    66,    67,    97,    -1,    -1,    71,    72,
    44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
    54,    84,    85,    86,    87,    -1,    -1,    90,    -1,    -1,
    -1,    65,    66,    67,    97,    -1,    -1,    71,    72,    44,
    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    54,
    84,    85,    86,    87,    -1,    -1,    90,    -1,    -1,    -1,
    65,    66,    67,    97,    -1,    -1,    71,    72,    44,    45,
    46,    47,    -1,    -1,    -1,    51,    -1,    -1,    54,    50,
    -1,    86,    87,    -1,    -1,    90,    -1,    -1,    -1,    65,
    66,    67,    97,    -1,    -1,    71,    72,    68,    69,    -1,
    -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
    -1,    97
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)
=======
}
/* Line 193 of yacc.c.  */
#line 323 "cmdgram.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 336 "cmdgram.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2858

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNRULES -- Number of states.  */
#define YYNSTATES  380

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,     2,     2,    54,    53,     2,
      55,    56,    46,    44,    57,    45,    51,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    59,
      48,    50,    49,    96,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    99,    62,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,    52,    61,    63,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    93,    94,    95,    97,    98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    13,    15,    22,
      24,    27,    28,    31,    33,    35,    37,    39,    41,    43,
      46,    49,    52,    56,    59,    64,    71,    73,    82,    93,
      94,    96,    98,   102,   113,   124,   132,   145,   155,   166,
     174,   175,   178,   179,   181,   182,   185,   186,   188,   190,
     193,   196,   200,   204,   206,   214,   222,   227,   235,   241,
     243,   247,   253,   261,   267,   274,   284,   293,   302,   310,
     319,   327,   335,   342,   350,   358,   360,   362,   366,   370,
     374,   378,   382,   386,   390,   394,   398,   401,   404,   406,
     412,   416,   420,   424,   428,   432,   436,   440,   444,   448,
     452,   456,   460,   464,   467,   470,   472,   474,   476,   478,
     480,   482,   484,   486,   488,   493,   497,   504,   508,   512,
     514,   518,   520,   522,   525,   528,   531,   534,   537,   540,
     543,   546,   549,   552,   554,   556,   558,   562,   569,   572,
     578,   581,   585,   591,   596,   603,   610,   615,   622,   623,
     625,   627,   631,   632,   634,   636,   639,   644,   650,   655,
     663,   672,   674
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     101,     0,    -1,   102,    -1,    -1,   102,   103,    -1,   107,
      -1,   108,    -1,   104,    -1,    29,    38,    60,   105,    61,
      59,    -1,   108,    -1,   105,   108,    -1,    -1,   106,   107,
      -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,   111,
      -1,   119,    -1,     7,    59,    -1,     9,    59,    -1,    13,
      59,    -1,    13,   127,    59,    -1,   126,    59,    -1,    36,
      50,   127,    59,    -1,    36,    50,   127,    57,   127,    59,
      -1,    40,    -1,     3,    38,    55,   109,    56,    60,   106,
      61,    -1,     3,    38,    91,    38,    55,   109,    56,    60,
     106,    61,    -1,    -1,   110,    -1,    37,    -1,   110,    57,
      37,    -1,    24,   130,    55,   127,   113,    56,    60,   137,
      61,    59,    -1,     5,   130,    55,   114,   113,   115,    56,
      60,   116,    61,    -1,     5,   130,    55,   114,   113,   115,
      56,    -1,     5,   130,    55,    92,   114,    99,   113,   115,
      56,    60,   116,    61,    -1,     5,   130,    55,    92,   114,
      99,   113,   115,    56,    -1,     6,   130,    55,   114,   113,
     115,    56,    60,   116,    61,    -1,     6,   130,    55,   114,
     113,   115,    56,    -1,    -1,    58,    38,    -1,    -1,   127,
      -1,    -1,    57,   136,    -1,    -1,   138,    -1,   117,    -1,
     138,   117,    -1,   112,    59,    -1,   117,   112,    59,    -1,
      60,   106,    61,    -1,   107,    -1,    25,    55,   127,    56,
      60,   120,    61,    -1,    27,    55,   127,    56,    60,   120,
      61,    -1,    26,   121,    58,   106,    -1,    26,   121,    58,
     106,    19,    58,   106,    -1,    26,   121,    58,   106,   120,
      -1,   127,    -1,   121,    28,   127,    -1,    11,    55,   127,
      56,   118,    -1,    11,    55,   127,    56,   118,     8,   118,
      -1,    14,    55,   127,    56,   118,    -1,    15,   118,    14,
      55,   127,    56,    -1,    20,    55,   127,    59,   127,    59,
     127,    56,   118,    -1,    20,    55,   127,    59,   127,    59,
      56,   118,    -1,    20,    55,   127,    59,    59,   127,    56,
     118,    -1,    20,    55,   127,    59,    59,    56,   118,    -1,
      20,    55,    59,   127,    59,   127,    56,   118,    -1,    20,
      55,    59,   127,    59,    56,   118,    -1,    20,    55,    59,
      59,   127,    56,   118,    -1,    20,    55,    59,    59,    56,
     118,    -1,    21,    55,    37,    23,   127,    56,   118,    -1,
      22,    55,    37,    23,   127,    56,   118,    -1,   132,    -1,
     132,    -1,    55,   127,    56,    -1,   127,    62,   127,    -1,
     127,    54,   127,    -1,   127,    53,   127,    -1,   127,    52,
     127,    -1,   127,    44,   127,    -1,   127,    45,   127,    -1,
     127,    46,   127,    -1,   127,    47,   127,    -1,    45,   127,
      -1,    46,   127,    -1,    36,    -1,   127,    96,   127,    58,
     127,    -1,   127,    48,   127,    -1,   127,    49,   127,    -1,
     127,    86,   127,    -1,   127,    87,   127,    -1,   127,    84,
     127,    -1,   127,    85,   127,    -1,   127,    89,   127,    -1,
     127,    71,   127,    -1,   127,    72,   127,    -1,   127,    88,
     127,    -1,   127,    90,   127,    -1,   127,    97,   127,    -1,
     127,    65,   127,    -1,    64,   127,    -1,    63,   127,    -1,
      42,    -1,    43,    -1,    35,    -1,     7,    -1,   128,    -1,
     129,    -1,    38,    -1,    41,    -1,    37,    -1,    37,    92,
     140,    99,    -1,   127,    51,    38,    -1,   127,    51,    38,
      92,   140,    99,    -1,   127,    66,   130,    -1,   127,    67,
     130,    -1,    38,    -1,    55,   127,    56,    -1,    69,    -1,
      68,    -1,    73,   127,    -1,    74,   127,    -1,    75,   127,
      -1,    76,   127,    -1,    77,   127,    -1,    78,   127,    -1,
      79,   127,    -1,    80,   127,    -1,    81,   127,    -1,    82,
     127,    -1,   133,    -1,   134,    -1,   112,    -1,    37,    50,
     127,    -1,    37,    92,   140,    99,    50,   127,    -1,    37,
     131,    -1,    37,    92,   140,    99,   131,    -1,   128,   131,
      -1,   128,    50,   127,    -1,   128,    50,    60,   136,    61,
      -1,    38,    55,   135,    56,    -1,    38,    91,    38,    55,
     135,    56,    -1,   127,    51,    38,    55,   135,    56,    -1,
      32,    55,   127,    56,    -1,    32,    55,   127,    57,    41,
      56,    -1,    -1,   136,    -1,   127,    -1,   136,    57,   127,
      -1,    -1,   138,    -1,   139,    -1,   138,   139,    -1,    38,
      50,   127,    59,    -1,    39,    38,    50,   127,    59,    -1,
      24,    50,   127,    59,    -1,    38,    92,   140,    99,    50,
     127,    59,    -1,    39,    38,    92,   140,    99,    50,   127,
      59,    -1,   127,    -1,   140,    57,   127,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   161,   161,   167,   168,   173,   175,   177,   182,   187,
     189,   195,   196,   201,   202,   203,   204,   205,   206,   207,
     209,   211,   213,   215,   217,   219,   221,   226,   228,   234,
     235,   240,   242,   247,   252,   254,   256,   258,   260,   262,
     268,   269,   275,   276,   282,   283,   289,   290,   292,   294,
     299,   301,   306,   308,   313,   315,   320,   322,   324,   329,
     331,   336,   338,   343,   345,   350,   352,   354,   356,   358,
     360,   362,   364,   369,   371,   376,   381,   383,   385,   387,
     389,   391,   393,   395,   397,   399,   401,   403,   405,   407,
     409,   411,   413,   415,   417,   419,   421,   423,   425,   427,
     429,   431,   433,   435,   437,   439,   441,   443,   445,   447,
     449,   451,   453,   455,   457,   462,   464,   469,   471,   476,
     478,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   510,   512,   514,   516,   518,   520,   522,
     524,   526,   528,   533,   535,   537,   542,   544,   550,   551,
     556,   558,   564,   565,   570,   572,   577,   579,   581,   583,
     585,   590,   592
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "rwDEFINE", "rwENDDEF", "rwDECLARE",
  "rwDECLARESINGLETON", "rwBREAK", "rwELSE", "rwCONTINUE", "rwGLOBAL",
  "rwIF", "rwNIL", "rwRETURN", "rwWHILE", "rwDO", "rwENDIF", "rwENDWHILE",
  "rwENDFOR", "rwDEFAULT", "rwFOR", "rwFOREACH", "rwFOREACHSTR", "rwIN",
  "rwDATABLOCK", "rwSWITCH", "rwCASE", "rwSWITCHSTR", "rwCASEOR",
  "rwPACKAGE", "rwNAMESPACE", "rwCLASS", "rwASSERT", "ILLEGAL_TOKEN",
  "CHRCONST", "INTCONST", "TTAG", "VAR", "IDENT", "TYPEIDENT", "DOCBLOCK",
  "STRATOM", "TAGATOM", "FLTCONST", "'+'", "'-'", "'*'", "'/'", "'<'",
  "'>'", "'='", "'.'", "'|'", "'&'", "'%'", "'('", "')'", "','", "':'",
  "';'", "'{'", "'}'", "'^'", "'~'", "'!'", "'@'", "opINTNAME",
  "opINTNAMER", "opMINUSMINUS", "opPLUSPLUS", "STMT_SEP", "opSHL", "opSHR",
  "opPLASN", "opMIASN", "opMLASN", "opDVASN", "opMODASN", "opANDASN",
  "opXORASN", "opORASN", "opSLASN", "opSRASN", "opCAT", "opEQ", "opNE",
  "opGE", "opLE", "opAND", "opOR", "opSTREQ", "opCOLONCOLON", "'['",
  "opNTASN", "opNDASN", "opMDASN", "'?'", "opSTRNE", "UNARY", "']'",
  "$accept", "start", "decl_list", "decl", "package_decl", "fn_decl_list",
  "statement_list", "stmt", "fn_decl_stmt", "var_list_decl", "var_list",
  "datablock_decl", "object_decl", "parent_block", "object_name",
  "object_args", "object_declare_block", "object_decl_list", "stmt_block",
  "switch_stmt", "case_block", "case_expr", "if_stmt", "while_stmt",
  "for_stmt", "foreach_stmt", "expression_stmt", "expr", "slot_acc",
  "intslot_acc", "class_name_expr", "assign_op_struct", "stmt_expr",
  "funcall_expr", "assert_expr", "expr_list_decl", "expr_list",
  "slot_assign_list_opt", "slot_assign_list", "slot_assign", "aidx_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    43,    45,    42,    47,    60,    62,
      61,    46,   124,    38,    37,    40,    41,    44,    58,    59,
     123,   125,    94,   126,    33,    64,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,    91,   325,   326,   327,    63,   328,   329,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   102,   102,   103,   103,   103,   104,   105,
     105,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   140,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     6,     1,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     2,     4,     6,     1,     8,    10,     0,
       1,     1,     3,    10,    10,     7,    12,     9,    10,     7,
       0,     2,     0,     1,     0,     2,     0,     1,     1,     2,
       2,     3,     3,     1,     7,     7,     4,     7,     5,     1,
       3,     5,     7,     5,     6,     9,     8,     8,     7,     8,
       7,     7,     6,     7,     7,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     6,     3,     3,     1,
       3,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     3,     6,     2,     5,
       2,     3,     5,     4,     6,     6,     4,     6,     0,     1,
       1,     3,     0,     1,     1,     2,     4,     5,     4,     7,
       8,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,    88,   113,   111,    26,   112,   105,   106,     0,
       0,     0,     0,     0,     4,     7,     5,     6,    17,   135,
      18,    13,    14,    15,    16,     0,     0,   109,   110,    76,
     133,   134,     0,   119,     0,     0,     0,    19,    20,     0,
     108,    88,    21,     0,    76,     0,    11,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,   148,     0,    86,    87,     0,   104,   103,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,    29,     0,
       0,    42,    42,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   161,
       0,   150,     0,   149,     0,    77,    82,    83,    84,    85,
      90,    91,   115,    81,    80,    79,    78,   102,   117,   118,
      97,    98,    94,    95,    92,    93,    99,    96,   100,     0,
     101,     0,   141,    31,     0,    30,     0,   120,    42,    40,
      43,    40,     0,     0,    52,    12,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     9,   146,     0,     0,
      24,     0,   114,   143,     0,   148,   148,     0,     0,     0,
       0,     0,    29,     0,     0,    44,    44,    61,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,   162,     0,   139,   151,     0,     0,
       0,    89,   142,    11,    32,     0,    40,    41,     0,     0,
       0,     0,    64,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,   147,    25,   137,
     144,   145,   116,     0,     0,    44,    45,    35,    39,    62,
      71,    70,     0,    68,     0,     0,     0,    73,    74,   152,
       0,    59,    54,    55,    27,    11,     0,    46,    46,    69,
      67,    66,     0,     0,     0,     0,     0,   153,   154,     0,
      11,     0,    37,     0,     0,    48,    47,     0,    65,     0,
       0,     0,     0,     0,   155,    60,    56,    28,    46,    50,
      34,     0,    49,    38,     0,     0,     0,     0,     0,    33,
       0,    58,     0,    51,   158,   156,     0,     0,     0,    11,
      36,     0,   157,     0,    57,     0,     0,   159,     0,   160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    34,    35,   215,   136,    67,    37,   194,
     195,    38,    39,   235,   199,   269,   334,   335,    68,    40,
     284,   310,    41,    42,    43,    44,    45,    46,    47,    48,
      55,    92,    64,    50,    51,   162,   163,   326,   336,   328,
     160
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -310
static const yytype_int16 yypact[] =
{
    -310,    31,   397,  -310,     4,     2,     2,    -3,    32,    27,
     167,    34,   489,    40,    41,    43,     2,    44,    47,    66,
      55,  -310,    67,   115,   -33,  -310,  -310,  -310,  -310,  1002,
    1002,  1002,  1002,  1002,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,    59,  2465,  2727,  -310,    71,
    -310,  -310,   -12,  -310,  1002,    81,    82,  -310,  -310,  1002,
    -310,  -310,  -310,  1115,  -310,  1002,  -310,  -310,   124,   708,
     108,   129,    97,  1002,  1002,   107,  1002,  1002,  1002,  -310,
    -310,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,  1002,
    1002,  1002,  -310,  1002,   133,   -34,   -34,  1169,   -34,   -34,
    -310,  1002,  1002,  1002,  1002,  1002,  1002,   137,  1002,  1002,
    1002,  1002,  1002,     2,     2,  1002,  1002,  1002,  1002,  1002,
    1002,  1002,  1002,  1002,  1002,  1002,   750,  -310,   141,   143,
    1223,     9,  1002,  1277,  -310,  1331,   549,   127,   792,  1385,
     156,   162,  1002,  1439,  1493,   183,  1007,  1061,  2465,  2465,
    2465,  2465,  2465,  2465,  2465,  2465,  2465,  2465,  2465,  2465,
     -39,  2465,   131,   149,   159,  -310,   292,   292,   -34,   -34,
    2722,  2722,   -43,  2606,  2664,   -34,  2635,  2786,  -310,  -310,
      39,    39,  2693,  2693,  2722,  2722,  2577,  2548,  2786,  1547,
    2786,  1002,  2465,  -310,   142,   154,   160,  -310,  1002,   158,
    2465,   158,   489,   489,  -310,  -310,  1002,   319,  1601,   834,
    1002,  1002,  1655,   157,   161,     5,  -310,  -310,   179,  1002,
    -310,  1002,  2747,  -310,  1002,  1002,  1002,  1002,  1002,   -31,
     165,   190,   141,   135,   197,   171,   171,   231,  -310,  1709,
     489,  1763,   876,   918,  1817,  1871,  1925,   184,   217,   217,
     187,  -310,   194,  1979,  2465,  1002,  -310,  2465,   199,   200,
     -38,  2519,  -310,  -310,  -310,   204,   158,  -310,  1002,   205,
     211,   489,  -310,  -310,   489,   489,  2033,   489,  2087,   960,
     489,   489,   193,  1002,   207,   210,  -310,  -310,  -310,  2465,
    -310,  -310,  -310,   594,   214,   171,   149,   216,   222,  -310,
    -310,  -310,   489,  -310,   489,   489,  2141,  -310,  -310,    70,
      -5,  2465,  -310,  -310,  -310,  -310,   221,   213,   213,  -310,
    -310,  -310,   489,   233,   -30,   246,   224,    70,  -310,  1002,
    -310,   639,   226,   228,   227,    23,   213,   229,  -310,  1002,
    1002,  1002,   -29,   230,  -310,  2465,   444,  -310,   213,  -310,
    -310,   235,    23,  -310,  2195,  2249,   -23,  1002,  1002,  -310,
     237,  -310,   236,  -310,  -310,  -310,   248,  2303,   -19,  -310,
    -310,  1002,  -310,   249,   684,  2357,  1002,  -310,  2411,  -310
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -310,  -310,  -310,  -310,  -310,  -310,  -256,    -1,  -140,    64,
    -310,  -310,   -94,  -188,  -121,  -230,  -309,   -28,    30,  -310,
    -246,  -310,  -310,  -310,  -310,  -310,  -310,    38,  -310,  -310,
      19,   -45,    -2,  -310,  -310,  -138,  -187,  -310,     0,  -300,
    -190
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      49,    36,   127,   285,   229,   216,   270,   293,     4,   337,
      49,   201,   226,   236,     5,     6,    60,   107,   221,   221,
     340,   357,    93,   329,   247,    56,   224,   344,     5,     6,
     262,     3,   113,   114,   221,    72,   344,   260,   221,   362,
      53,    20,    52,   128,    21,    61,    23,    24,    63,   227,
      26,    27,    28,   330,    29,    30,    57,    54,    94,   331,
     222,   292,   341,   358,    31,   316,   250,    95,    96,    97,
      98,    99,    32,    33,   346,   251,   366,   233,   295,   129,
     373,   296,    59,   101,   102,   103,   104,   258,   259,    65,
     107,    58,   130,   110,   323,    69,    70,   133,    71,    73,
     361,   198,    74,   135,    75,   113,   114,   139,   324,   325,
      76,   143,   144,   374,   146,   147,   148,    77,   100,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     -75,   161,   178,   179,    49,   205,   131,   132,   137,   166,
     167,   168,   169,   170,   171,   140,   173,   174,   175,   176,
     177,   356,   142,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   192,    78,   141,   145,   368,   200,
     200,   164,     5,     6,    60,   172,   208,   256,   193,   210,
     212,   196,   206,    79,    80,   211,     4,   223,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   230,    20,
      49,    49,    21,    61,    23,    24,   224,    91,    26,    27,
      28,   231,    29,    30,   225,   232,   234,   248,     5,     6,
     252,   249,    31,   333,   333,   263,    62,   264,   268,   161,
      32,    33,   237,   238,   266,   267,   200,   323,    49,   271,
     282,   351,   333,   283,   239,   241,   286,   244,   245,   246,
     287,   324,   325,   309,   333,   290,   291,   253,   351,   254,
     294,   297,   257,   161,   161,   159,   261,   298,   312,    49,
     273,   313,    49,    49,   315,    49,   317,   332,    49,    49,
     276,   278,   318,   339,   342,   343,   348,   349,   350,   359,
     353,    49,   205,   289,   363,   369,   265,   370,   371,   376,
      49,   299,    49,    49,   300,   301,   161,   303,   352,   327,
     307,   308,     0,     0,     0,     0,     0,   306,     0,     0,
      49,   311,     0,     0,     5,     6,    60,     0,     0,    49,
     205,     0,   319,     0,   320,   321,     0,     0,   103,   104,
       0,     0,     0,   107,    49,   205,   110,     0,     0,     0,
       0,    20,   338,     0,    21,    61,    23,    24,   113,   114,
      26,    27,    28,     0,    29,    30,     0,   345,     0,     0,
       0,     0,    49,   205,    31,   240,     0,   354,   355,   159,
       0,     0,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   159,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     8,     0,     9,   375,
      10,    11,    12,     0,   378,     0,     0,    13,    14,    15,
       0,    16,    17,     0,    18,     0,    19,     0,     0,    20,
       0,     0,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,    29,    30,     0,     0,     0,     0,     0,     5,
       6,     7,    31,     8,     0,     9,     0,    10,    11,    12,
      32,    33,     0,   360,    13,    14,    15,     0,    16,    17,
     283,    18,     0,     0,     0,     0,    20,     0,     0,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,    29,
      30,     0,     0,     0,     5,     6,     7,     0,     8,    31,
       9,     0,    10,    11,    12,     0,     0,    32,    33,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,     0,
       0,    20,     0,     0,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,    66,
       0,     0,    32,    33,     5,     6,     7,     0,     8,     0,
       9,     0,    10,    11,    12,     0,     0,     0,     0,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,     0,
       0,    20,     0,     0,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     5,
       6,     7,     0,     8,    31,     9,     0,    10,    11,    12,
     204,     0,    32,    33,    13,    14,    15,     0,    16,    17,
       0,    18,     0,     0,     0,     0,    20,     0,     0,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,    29,
      30,     0,     0,     0,     5,     6,     7,     0,     8,    31,
       9,     0,    10,    11,    12,   314,     0,    32,    33,    13,
      14,    15,     0,    16,    17,     0,    18,     0,     0,     0,
       0,    20,     0,     0,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,    29,    30,     0,     0,     0,     5,
       6,     7,     0,     8,    31,     9,     0,    10,    11,    12,
     347,     0,    32,    33,    13,    14,    15,     0,    16,    17,
       0,    18,     0,     5,     6,    60,    20,     0,     0,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      20,     0,     0,    21,    61,    23,    24,    32,    33,    26,
      27,    28,     0,    29,    30,     5,     6,    60,     0,     0,
       0,     0,     0,    31,     0,     0,     0,   138,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,    21,    61,    23,    24,     0,
       0,    26,    27,    28,     0,    29,    30,     5,     6,    60,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
     191,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    21,    61,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     5,
       6,    60,     0,     0,     0,     0,     0,    31,     0,     0,
       0,   207,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,    21,
      61,    23,    24,     0,     0,    26,    27,    28,     0,    29,
      30,     5,     6,    60,     0,     0,     0,     0,     0,    31,
       0,     0,     0,   243,     0,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    21,    61,    23,    24,     0,     0,    26,    27,    28,
       0,    29,    30,     5,     6,    60,     0,     0,     0,     0,
       0,    31,   275,     0,     0,     0,     0,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,    21,    61,    23,    24,     0,     0,    26,
      27,    28,     0,    29,    30,     5,     6,    60,     0,     0,
       0,     0,     0,    31,   277,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,    21,    61,    23,    24,     0,
       0,    26,    27,    28,     0,    29,    30,     5,     6,    60,
       0,     0,     0,     0,     0,    31,   305,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,    21,    61,    23,
      24,     0,     0,    26,    27,    28,     0,    29,    30,     0,
       0,   101,   102,   103,   104,   105,   106,    31,   107,   108,
     109,   110,     0,   217,   218,    32,    33,     0,     0,   111,
       0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
     106,     0,   107,   108,   109,   110,     0,     0,   219,     0,
     220,     0,     0,   111,     0,     0,   112,   113,   114,     0,
       0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
     122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
     102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
       0,     0,     0,     0,   134,     0,     0,   111,     0,     0,
     112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
     107,   108,   109,   110,     0,   165,     0,     0,     0,     0,
       0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
     104,   105,   106,     0,   107,   108,   109,   110,     0,   197,
       0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
     114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
     125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
     109,   110,     0,   202,     0,     0,     0,     0,     0,   111,
       0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
     106,     0,   107,   108,   109,   110,     0,   203,     0,     0,
       0,     0,     0,   111,     0,     0,   112,   113,   114,     0,
       0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
     122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
     102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
       0,     0,     0,     0,   209,     0,     0,   111,     0,     0,
     112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
     107,   108,   109,   110,     0,   213,     0,     0,     0,     0,
       0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
     104,   105,   106,     0,   107,   108,   109,   110,     0,   214,
       0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
     114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
     125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
     109,   110,     0,     0,     0,   228,     0,     0,     0,   111,
       0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
     106,     0,   107,   108,   109,   110,     0,     0,     0,     0,
     242,     0,     0,   111,     0,     0,   112,   113,   114,     0,
       0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
     122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
     102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
       0,     0,     0,   234,     0,     0,     0,   111,     0,     0,
     112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
     107,   108,   109,   110,     0,   272,     0,     0,     0,     0,
       0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
     104,   105,   106,     0,   107,   108,   109,   110,     0,   274,
       0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
     114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
     125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
     109,   110,     0,     0,     0,     0,   279,     0,     0,   111,
       0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
     106,     0,   107,   108,   109,   110,     0,   280,     0,     0,
       0,     0,     0,   111,     0,     0,   112,   113,   114,     0,
       0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
     122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
     102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
       0,   281,     0,     0,     0,     0,     0,   111,     0,     0,
     112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
     107,   108,   109,   110,     0,     0,     0,     0,   288,     0,
       0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
     104,   105,   106,     0,   107,   108,   109,   110,     0,   302,
       0,     0,     0,     0,     0,   111,     0,     0,   112,   113,
     114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
     125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
     109,   110,     0,   304,     0,     0,     0,     0,     0,   111,
       0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
     106,     0,   107,   108,   109,   110,     0,   322,     0,     0,
       0,     0,     0,   111,     0,     0,   112,   113,   114,     0,
       0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
     122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
     102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
       0,     0,     0,     0,   364,     0,     0,   111,     0,     0,
     112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
     107,   108,   109,   110,     0,     0,     0,     0,   365,     0,
       0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,     0,     0,   124,   125,   101,   102,   103,
     104,   105,   106,     0,   107,   108,   109,   110,     0,     0,
       0,     0,   372,     0,     0,   111,     0,     0,   112,   113,
     114,     0,     0,     0,   115,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,     0,     0,   124,
     125,   101,   102,   103,   104,   105,   106,     0,   107,   108,
     109,   110,     0,     0,     0,     0,   377,     0,     0,   111,
       0,     0,   112,   113,   114,     0,     0,     0,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   124,   125,   101,   102,   103,   104,   105,
     106,     0,   107,   108,   109,   110,     0,     0,     0,     0,
     379,     0,     0,   111,     0,     0,   112,   113,   114,     0,
       0,     0,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,   121,
     122,   123,     0,     0,     0,     0,     0,   124,   125,   101,
     102,   103,   104,   105,   106,     0,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
     112,   113,   114,     0,     0,     0,   115,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,   124,   125,   101,   102,   103,   104,   105,   106,     0,
     107,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,   112,   113,   114,     0,     0,     0,
     115,   116,   101,   102,   103,   104,   105,   106,     0,   107,
     108,   109,   110,   117,   118,   119,   120,   121,   122,   123,
     111,     0,     0,   112,   113,   114,   125,     0,     0,   115,
     116,   101,   102,   103,   104,   105,   106,     0,   107,   108,
     109,   110,   117,   118,   119,   120,   121,     0,   123,   111,
       0,     0,   112,   113,   114,   125,     0,     0,   115,   116,
     101,   102,   103,   104,   105,   106,     0,   107,     0,   109,
     110,   117,   118,   119,   120,     0,     0,   123,   111,     0,
       0,   112,   113,   114,   125,     0,     0,   115,   116,   101,
     102,   103,   104,   105,   106,     0,   107,     0,   109,   110,
     117,   118,   119,   120,     0,     0,   123,     0,     0,     0,
     112,   113,   114,   125,     0,     0,   115,   116,   101,   102,
     103,   104,   105,   106,     0,   107,     0,     0,   110,   117,
     118,   119,   120,     0,     0,   123,     0,     0,     0,   112,
     113,   114,   125,     0,     0,   115,   116,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,   110,   117,   118,
     119,   120,     0,     0,   123,     0,     0,     0,   112,   113,
     114,   125,     0,     0,   115,   116,   101,   102,   103,   104,
       0,     0,     0,   107,     0,     0,   110,   126,     0,   119,
     120,     0,     0,   123,     0,     0,     0,   112,   113,   114,
     125,     0,     0,   115,   116,    79,    80,   255,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,   123,     0,     0,    79,    80,     0,     0,   125,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     101,   102,   103,   104,     0,     0,     0,   107,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,     0,     0,     0,   115,   116
};

static const yytype_int16 yycheck[] =
{
       2,     2,    47,   249,   191,   145,   236,   263,     3,   318,
      12,   132,    55,   201,     5,     6,     7,    51,    57,    57,
      50,    50,    55,    28,   212,     6,    57,   327,     5,     6,
      61,     0,    66,    67,    57,    16,   336,   227,    57,   348,
      38,    32,    38,    55,    35,    36,    37,    38,    10,    92,
      41,    42,    43,    58,    45,    46,    59,    55,    91,   315,
      99,    99,    92,    92,    55,   295,    61,    29,    30,    31,
      32,    33,    63,    64,   330,   215,    99,   198,   266,    91,
      99,   268,    55,    44,    45,    46,    47,   225,   226,    55,
      51,    59,    54,    54,    24,    55,    55,    59,    55,    55,
     346,    92,    55,    65,    38,    66,    67,    69,    38,    39,
      55,    73,    74,   369,    76,    77,    78,    50,    59,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      59,    93,   113,   114,   136,   136,    55,    55,    14,   101,
     102,   103,   104,   105,   106,    37,   108,   109,   110,   111,
     112,   341,    55,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    50,    37,    60,   358,   131,
     132,    38,     5,     6,     7,    38,   138,   222,    37,    23,
     142,    38,    55,    68,    69,    23,     3,    56,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    56,    32,
     202,   203,    35,    36,    37,    38,    57,    92,    41,    42,
      43,    57,    45,    46,    55,    55,    58,    60,     5,     6,
      41,    60,    55,   317,   318,    60,    59,    37,    57,   191,
      63,    64,   202,   203,    99,    38,   198,    24,   240,     8,
      56,   335,   336,    26,   206,   207,    59,   209,   210,   211,
      56,    38,    39,    60,   348,    56,    56,   219,   352,   221,
      56,    56,   224,   225,   226,   227,   228,    56,    61,   271,
     240,    61,   274,   275,    60,   277,    60,    56,   280,   281,
     242,   243,    60,    50,    38,    61,    60,    59,    61,    59,
      61,   293,   293,   255,    59,    58,   232,    61,    50,    50,
     302,   271,   304,   305,   274,   275,   268,   277,   336,   309,
     280,   281,    -1,    -1,    -1,    -1,    -1,   279,    -1,    -1,
     322,   283,    -1,    -1,     5,     6,     7,    -1,    -1,   331,
     331,    -1,   302,    -1,   304,   305,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,   346,   346,    54,    -1,    -1,    -1,
      -1,    32,   322,    -1,    35,    36,    37,    38,    66,    67,
      41,    42,    43,    -1,    45,    46,    -1,   329,    -1,    -1,
      -1,    -1,   374,   374,    55,    56,    -1,   339,   340,   341,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   357,   358,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,    -1,     9,    -1,    11,   371,
      13,    14,    15,    -1,   376,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    -1,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,    55,     9,    -1,    11,    -1,    13,    14,    15,
      63,    64,    -1,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    -1,    45,
      46,    -1,    -1,    -1,     5,     6,     7,    -1,     9,    55,
      11,    -1,    13,    14,    15,    -1,    -1,    63,    64,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    64,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    45,    46,    -1,    -1,    -1,     5,
       6,     7,    -1,     9,    55,    11,    -1,    13,    14,    15,
      61,    -1,    63,    64,    20,    21,    22,    -1,    24,    25,
      -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    -1,    45,
      46,    -1,    -1,    -1,     5,     6,     7,    -1,     9,    55,
      11,    -1,    13,    14,    15,    61,    -1,    63,    64,    20,
      21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    45,    46,    -1,    -1,    -1,     5,
       6,     7,    -1,     9,    55,    11,    -1,    13,    14,    15,
      61,    -1,    63,    64,    20,    21,    22,    -1,    24,    25,
      -1,    27,    -1,     5,     6,     7,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    40,    41,    42,    43,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      32,    -1,    -1,    35,    36,    37,    38,    63,    64,    41,
      42,    43,    -1,    45,    46,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    45,    46,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    -1,    45,    46,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    -1,    45,
      46,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      -1,    45,    46,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    -1,    45,    46,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    45,    46,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    -1,    45,    46,    -1,
      -1,    44,    45,    46,    47,    48,    49,    55,    51,    52,
      53,    54,    -1,    56,    57,    63,    64,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
      97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
      97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
      97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
      97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    96,    97,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    96,
      97,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    96,    97,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    84,    85,    86,    87,    88,    89,    90,
      62,    -1,    -1,    65,    66,    67,    97,    -1,    -1,    71,
      72,    44,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    84,    85,    86,    87,    88,    -1,    90,    62,
      -1,    -1,    65,    66,    67,    97,    -1,    -1,    71,    72,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    53,
      54,    84,    85,    86,    87,    -1,    -1,    90,    62,    -1,
      -1,    65,    66,    67,    97,    -1,    -1,    71,    72,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    53,    54,
      84,    85,    86,    87,    -1,    -1,    90,    -1,    -1,    -1,
      65,    66,    67,    97,    -1,    -1,    71,    72,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    54,    84,
      85,    86,    87,    -1,    -1,    90,    -1,    -1,    -1,    65,
      66,    67,    97,    -1,    -1,    71,    72,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    54,    84,    85,
      86,    87,    -1,    -1,    90,    -1,    -1,    -1,    65,    66,
      67,    97,    -1,    -1,    71,    72,    44,    45,    46,    47,
      -1,    -1,    -1,    51,    -1,    -1,    54,    50,    -1,    86,
      87,    -1,    -1,    90,    -1,    -1,    -1,    65,    66,    67,
      97,    -1,    -1,    71,    72,    68,    69,    50,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    90,    -1,    -1,    68,    69,    -1,    -1,    97,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   101,   102,     0,     3,     5,     6,     7,     9,    11,
      13,    14,    15,    20,    21,    22,    24,    25,    27,    29,
      32,    35,    36,    37,    38,    40,    41,    42,    43,    45,
      46,    55,    63,    64,   103,   104,   107,   108,   111,   112,
     119,   122,   123,   124,   125,   126,   127,   128,   129,   132,
     133,   134,    38,    38,    55,   130,   130,    59,    59,    55,
       7,    36,    59,   127,   132,    55,    60,   107,   118,    55,
      55,    55,   130,    55,    55,    38,    55,    50,    50,    68,
      69,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    92,   131,    55,    91,   127,   127,   127,   127,   127,
      59,    44,    45,    46,    47,    48,    49,    51,    52,    53,
      54,    62,    65,    66,    67,    71,    72,    84,    85,    86,
      87,    88,    89,    90,    96,    97,    50,   131,    55,    91,
     127,    55,    55,   127,    59,   127,   106,    14,    59,   127,
      37,    37,    55,   127,   127,    60,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     140,   127,   135,   136,    38,    56,   127,   127,   127,   127,
     127,   127,    38,   127,   127,   127,   127,   127,   130,   130,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,    60,   127,    37,   109,   110,    38,    56,    92,   114,
     127,   114,    56,    56,    61,   107,    55,    59,   127,    59,
      23,    23,   127,    56,    56,   105,   108,    56,    57,    57,
      59,    57,    99,    56,    57,    55,    55,    92,    58,   136,
      56,    57,    55,   114,    58,   113,   113,   118,   118,   127,
      56,   127,    59,    59,   127,   127,   127,   113,    60,    60,
      61,   108,    41,   127,   127,    50,   131,   127,   135,   135,
     140,   127,    61,    60,    37,   109,    99,    38,    57,   115,
     115,     8,    56,   118,    56,    56,   127,    56,   127,    59,
      56,    56,    56,    26,   120,   120,    59,    56,    59,   127,
      56,    56,    99,   106,    56,   113,   136,    56,    56,   118,
     118,   118,    56,   118,    56,    56,   127,   118,   118,    60,
     121,   127,    61,    61,    61,    60,   115,    60,    60,   118,
     118,   118,    56,    24,    38,    39,   137,   138,   139,    28,
      58,   106,    56,   112,   116,   117,   138,   116,   118,    50,
      50,    92,    38,    61,   139,   127,   106,    61,    60,    59,
      61,   112,   117,    61,   127,   127,   140,    50,    92,    59,
      19,   120,   116,    59,    59,    59,    99,   127,   140,    58,
      61,    50,    59,    99,   106,   127,    50,    59,   127,    59
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

>>>>>>> omni_engine

#define YYTERROR	1
#define YYERRCODE	256

<<<<<<< HEAD
#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif
=======

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));
>>>>>>> omni_engine

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

<<<<<<< HEAD
  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
=======
  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
>>>>>>> omni_engine
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

<<<<<<< HEAD
  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 162 "cmdgram.y"
{ ;
    break;}
case 2:
#line 167 "cmdgram.y"
{ yyval.stmt = nil; ;
    break;}
case 3:
#line 169 "cmdgram.y"
{ if(!gStatementList) { gStatementList = yyvsp[0].stmt; } else { gStatementList->append(yyvsp[0].stmt); } ;
    break;}
case 4:
#line 174 "cmdgram.y"
{ yyval.stmt = yyvsp[0].stmt; ;
    break;}
case 5:
#line 176 "cmdgram.y"
{ yyval.stmt = yyvsp[0].stmt; ;
    break;}
case 6:
#line 178 "cmdgram.y"
{ yyval.stmt = yyvsp[0].stmt; ;
    break;}
case 7:
#line 183 "cmdgram.y"
{ yyval.stmt = yyvsp[-2].stmt; for(StmtNode *walk = (yyvsp[-2].stmt);walk;walk = walk->getNext() ) walk->setPackage(yyvsp[-4].s.value); ;
    break;}
case 8:
#line 188 "cmdgram.y"
{ yyval.stmt = yyvsp[0].stmt; ;
    break;}
case 9:
#line 190 "cmdgram.y"
{ yyval.stmt = yyvsp[-1].stmt; (yyvsp[-1].stmt)->append(yyvsp[0].stmt);  ;
    break;}
case 10:
#line 195 "cmdgram.y"
{ yyval.stmt = nil; ;
    break;}
case 11:
#line 197 "cmdgram.y"
{ if(!yyvsp[-1].stmt) { yyval.stmt = yyvsp[0].stmt; } else { (yyvsp[-1].stmt)->append(yyvsp[0].stmt); yyval.stmt = yyvsp[-1].stmt; } ;
    break;}
case 18:
#line 208 "cmdgram.y"
{ yyval.stmt = BreakStmtNode::alloc( yyvsp[-1].i.lineNumber ); ;
    break;}
case 19:
#line 210 "cmdgram.y"
{ yyval.stmt = ContinueStmtNode::alloc( yyvsp[-1].i.lineNumber ); ;
    break;}
case 20:
#line 212 "cmdgram.y"
{ yyval.stmt = ReturnStmtNode::alloc( yyvsp[-1].i.lineNumber, NULL ); ;
    break;}
case 21:
#line 214 "cmdgram.y"
{ yyval.stmt = ReturnStmtNode::alloc( yyvsp[-2].i.lineNumber, yyvsp[-1].expr ); ;
    break;}
case 22:
#line 216 "cmdgram.y"
{ yyval.stmt = yyvsp[-1].stmt; ;
    break;}
case 23:
#line 218 "cmdgram.y"
{ yyval.stmt = TTagSetStmtNode::alloc( yyvsp[-3].s.lineNumber, yyvsp[-3].s.value, yyvsp[-1].expr, NULL ); ;
    break;}
case 24:
#line 220 "cmdgram.y"
{ yyval.stmt = TTagSetStmtNode::alloc( yyvsp[-5].s.lineNumber, yyvsp[-5].s.value, yyvsp[-3].expr, yyvsp[-1].expr ); ;
    break;}
case 25:
#line 222 "cmdgram.y"
{ yyval.stmt = StrConstNode::alloc( yyvsp[0].str.lineNumber, yyvsp[0].str.value, false, true ); ;
    break;}
case 26:
#line 227 "cmdgram.y"
{ yyval.stmt = FunctionDeclStmtNode::alloc( yyvsp[-7].i.lineNumber, yyvsp[-6].s.value, NULL, yyvsp[-4].var, yyvsp[-1].stmt ); ;
    break;}
case 27:
#line 229 "cmdgram.y"
{ yyval.stmt = FunctionDeclStmtNode::alloc( yyvsp[-9].i.lineNumber, yyvsp[-6].s.value, yyvsp[-8].s.value, yyvsp[-4].var, yyvsp[-1].stmt ); ;
    break;}
case 28:
#line 234 "cmdgram.y"
{ yyval.var = NULL; ;
    break;}
case 29:
#line 236 "cmdgram.y"
{ yyval.var = yyvsp[0].var; ;
    break;}
case 30:
#line 241 "cmdgram.y"
{ yyval.var = VarNode::alloc( yyvsp[0].s.lineNumber, yyvsp[0].s.value, NULL ); ;
    break;}
case 31:
#line 243 "cmdgram.y"
{ yyval.var = yyvsp[-2].var; ((StmtNode*)(yyvsp[-2].var))->append((StmtNode*)VarNode::alloc( yyvsp[0].s.lineNumber, yyvsp[0].s.value, NULL ) ); ;
    break;}
case 32:
#line 248 "cmdgram.y"
{ yyval.stmt = ObjectDeclNode::alloc( yyvsp[-9].i.lineNumber, yyvsp[-8].expr, yyvsp[-6].expr, NULL, yyvsp[-5].s.value, yyvsp[-2].slist, NULL, true, false, false); ;
    break;}
case 33:
#line 253 "cmdgram.y"
{ yyval.od = ObjectDeclNode::alloc( yyvsp[-9].i.lineNumber, yyvsp[-8].expr, yyvsp[-6].expr, yyvsp[-4].expr, yyvsp[-5].s.value, yyvsp[-1].odcl.slots, yyvsp[-1].odcl.decls, false, false, false); ;
    break;}
case 34:
#line 255 "cmdgram.y"
{ yyval.od = ObjectDeclNode::alloc( yyvsp[-6].i.lineNumber, yyvsp[-5].expr, yyvsp[-3].expr, yyvsp[-1].expr, yyvsp[-2].s.value, NULL, NULL, false, false, false); ;
    break;}
case 35:
#line 257 "cmdgram.y"
{ yyval.od = ObjectDeclNode::alloc( yyvsp[-11].i.lineNumber, yyvsp[-10].expr, yyvsp[-7].expr, yyvsp[-4].expr, yyvsp[-5].s.value, yyvsp[-1].odcl.slots, yyvsp[-1].odcl.decls, false, true, false); ;
    break;}
case 36:
#line 259 "cmdgram.y"
{ yyval.od = ObjectDeclNode::alloc( yyvsp[-8].i.lineNumber, yyvsp[-7].expr, yyvsp[-4].expr, yyvsp[-1].expr, yyvsp[-2].s.value, NULL, NULL, false, true, false); ;
    break;}
case 37:
#line 261 "cmdgram.y"
{ yyval.od = ObjectDeclNode::alloc( yyvsp[-9].i.lineNumber, yyvsp[-8].expr, yyvsp[-6].expr, yyvsp[-4].expr, yyvsp[-5].s.value, yyvsp[-1].odcl.slots, yyvsp[-1].odcl.decls, false, false, true); ;
    break;}
case 38:
#line 263 "cmdgram.y"
{ yyval.od = ObjectDeclNode::alloc( yyvsp[-6].i.lineNumber, yyvsp[-5].expr, yyvsp[-3].expr, yyvsp[-1].expr, yyvsp[-2].s.value, NULL, NULL, false, false, true); ;
    break;}
case 39:
#line 268 "cmdgram.y"
{ yyval.s.value = NULL; ;
    break;}
case 40:
#line 270 "cmdgram.y"
{ yyval.s = yyvsp[0].s; ;
    break;}
case 41:
#line 275 "cmdgram.y"
{ yyval.expr = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); ;
    break;}
case 42:
#line 277 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 43:
#line 282 "cmdgram.y"
{ yyval.expr = NULL; ;
    break;}
case 44:
#line 284 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 45:
#line 289 "cmdgram.y"
{ yyval.odcl.slots = NULL; yyval.odcl.decls = NULL; ;
    break;}
case 46:
#line 291 "cmdgram.y"
{ yyval.odcl.slots = yyvsp[0].slist; yyval.odcl.decls = NULL; ;
    break;}
case 47:
#line 293 "cmdgram.y"
{ yyval.odcl.slots = NULL; yyval.odcl.decls = yyvsp[0].od; ;
    break;}
case 48:
#line 295 "cmdgram.y"
{ yyval.odcl.slots = yyvsp[-1].slist; yyval.odcl.decls = yyvsp[0].od; ;
    break;}
case 49:
#line 300 "cmdgram.y"
{ yyval.od = yyvsp[-1].od; ;
    break;}
case 50:
#line 302 "cmdgram.y"
{ yyvsp[-2].od->append(yyvsp[-1].od); yyval.od = yyvsp[-2].od; ;
    break;}
case 51:
#line 307 "cmdgram.y"
{ yyval.stmt = yyvsp[-1].stmt; ;
    break;}
case 52:
#line 309 "cmdgram.y"
{ yyval.stmt = yyvsp[0].stmt; ;
    break;}
case 53:
#line 314 "cmdgram.y"
{ yyval.stmt = yyvsp[-1].ifnode; yyvsp[-1].ifnode->propagateSwitchExpr(yyvsp[-4].expr, false); ;
    break;}
case 54:
#line 316 "cmdgram.y"
{ yyval.stmt = yyvsp[-1].ifnode; yyvsp[-1].ifnode->propagateSwitchExpr(yyvsp[-4].expr, true); ;
    break;}
case 55:
#line 321 "cmdgram.y"
{ yyval.ifnode = IfStmtNode::alloc( yyvsp[-3].i.lineNumber, yyvsp[-2].expr, yyvsp[0].stmt, NULL, false); ;
    break;}
case 56:
#line 323 "cmdgram.y"
{ yyval.ifnode = IfStmtNode::alloc( yyvsp[-6].i.lineNumber, yyvsp[-5].expr, yyvsp[-3].stmt, yyvsp[0].stmt, false); ;
    break;}
case 57:
#line 325 "cmdgram.y"
{ yyval.ifnode = IfStmtNode::alloc( yyvsp[-4].i.lineNumber, yyvsp[-3].expr, yyvsp[-1].stmt, yyvsp[0].ifnode, true); ;
    break;}
case 58:
#line 330 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr;;
    break;}
case 59:
#line 332 "cmdgram.y"
{ (yyvsp[-2].expr)->append(yyvsp[0].expr); yyval.expr=yyvsp[-2].expr; ;
    break;}
case 60:
#line 337 "cmdgram.y"
{ yyval.stmt = IfStmtNode::alloc(yyvsp[-4].i.lineNumber, yyvsp[-2].expr, yyvsp[0].stmt, NULL, false); ;
    break;}
case 61:
#line 339 "cmdgram.y"
{ yyval.stmt = IfStmtNode::alloc(yyvsp[-6].i.lineNumber, yyvsp[-4].expr, yyvsp[-2].stmt, yyvsp[0].stmt, false); ;
    break;}
case 62:
#line 344 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-4].i.lineNumber, nil, yyvsp[-2].expr, nil, yyvsp[0].stmt, false); ;
    break;}
case 63:
#line 346 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-3].i.lineNumber, nil, yyvsp[-1].expr, nil, yyvsp[-4].stmt, true); ;
    break;}
case 64:
#line 351 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-8].i.lineNumber, yyvsp[-6].expr, yyvsp[-4].expr, yyvsp[-2].expr, yyvsp[0].stmt, false); ;
    break;}
case 65:
#line 353 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-7].i.lineNumber, yyvsp[-5].expr, yyvsp[-3].expr, NULL, yyvsp[0].stmt, false); ;
    break;}
case 66:
#line 355 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-7].i.lineNumber, yyvsp[-5].expr, NULL, yyvsp[-2].expr, yyvsp[0].stmt, false); ;
    break;}
case 67:
#line 357 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-6].i.lineNumber, yyvsp[-4].expr, NULL, NULL, yyvsp[0].stmt, false); ;
    break;}
case 68:
#line 359 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-7].i.lineNumber, NULL, yyvsp[-4].expr, yyvsp[-2].expr, yyvsp[0].stmt, false); ;
    break;}
case 69:
#line 361 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-6].i.lineNumber, NULL, yyvsp[-3].expr, NULL, yyvsp[0].stmt, false); ;
    break;}
case 70:
#line 363 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-6].i.lineNumber, NULL, NULL, yyvsp[-2].expr, yyvsp[0].stmt, false); ;
    break;}
case 71:
#line 365 "cmdgram.y"
{ yyval.stmt = LoopStmtNode::alloc(yyvsp[-5].i.lineNumber, NULL, NULL, NULL, yyvsp[0].stmt, false); ;
    break;}
case 72:
#line 370 "cmdgram.y"
{ yyval.stmt = IterStmtNode::alloc( yyvsp[-6].i.lineNumber, yyvsp[-4].s.value, yyvsp[-2].expr, yyvsp[0].stmt, false ); ;
    break;}
case 73:
#line 372 "cmdgram.y"
{ yyval.stmt = IterStmtNode::alloc( yyvsp[-6].i.lineNumber, yyvsp[-4].s.value, yyvsp[-2].expr, yyvsp[0].stmt, true ); ;
    break;}
case 74:
#line 377 "cmdgram.y"
{ yyval.stmt = yyvsp[0].expr; ;
    break;}
case 75:
#line 382 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 76:
#line 384 "cmdgram.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 77:
#line 386 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 78:
#line 388 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 79:
#line 390 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 80:
#line 392 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 81:
#line 394 "cmdgram.y"
{ yyval.expr = FloatBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 82:
#line 396 "cmdgram.y"
{ yyval.expr = FloatBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 83:
#line 398 "cmdgram.y"
{ yyval.expr = FloatBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 84:
#line 400 "cmdgram.y"
{ yyval.expr = FloatBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 85:
#line 402 "cmdgram.y"
{ yyval.expr = FloatUnaryExprNode::alloc( yyvsp[-1].i.lineNumber, yyvsp[-1].i.value, yyvsp[0].expr); ;
    break;}
case 86:
#line 404 "cmdgram.y"
{ yyval.expr = TTagDerefNode::alloc( yyvsp[-1].i.lineNumber, yyvsp[0].expr ); ;
    break;}
case 87:
#line 406 "cmdgram.y"
{ yyval.expr = TTagExprNode::alloc( yyvsp[0].s.lineNumber, yyvsp[0].s.value ); ;
    break;}
case 88:
#line 408 "cmdgram.y"
{ yyval.expr = ConditionalExprNode::alloc( yyvsp[-4].expr->dbgLineNumber, yyvsp[-4].expr, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 89:
#line 410 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 90:
#line 412 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 91:
#line 414 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 92:
#line 416 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 93:
#line 418 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 94:
#line 420 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 95:
#line 422 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 96:
#line 424 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 97:
#line 426 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 98:
#line 428 "cmdgram.y"
{ yyval.expr = IntBinaryExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-1].i.value, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
case 99:
#line 430 "cmdgram.y"
{ yyval.expr = StreqExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-2].expr, yyvsp[0].expr, true); ;
    break;}
case 100:
#line 432 "cmdgram.y"
{ yyval.expr = StreqExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-2].expr, yyvsp[0].expr, false); ;
    break;}
case 101:
#line 434 "cmdgram.y"
{ yyval.expr = StrcatExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-2].expr, yyvsp[0].expr, yyvsp[-1].i.value); ;
    break;}
case 102:
#line 436 "cmdgram.y"
{ yyval.expr = IntUnaryExprNode::alloc(yyvsp[-1].i.lineNumber, yyvsp[-1].i.value, yyvsp[0].expr); ;
    break;}
case 103:
#line 438 "cmdgram.y"
{ yyval.expr = IntUnaryExprNode::alloc(yyvsp[-1].i.lineNumber, yyvsp[-1].i.value, yyvsp[0].expr); ;
    break;}
case 104:
#line 440 "cmdgram.y"
{ yyval.expr = StrConstNode::alloc( yyvsp[0].str.lineNumber, yyvsp[0].str.value, true); ;
    break;}
case 105:
#line 442 "cmdgram.y"
{ yyval.expr = FloatNode::alloc( yyvsp[0].f.lineNumber, yyvsp[0].f.value ); ;
    break;}
case 106:
#line 444 "cmdgram.y"
{ yyval.expr = IntNode::alloc( yyvsp[0].i.lineNumber, yyvsp[0].i.value ); ;
    break;}
case 107:
#line 446 "cmdgram.y"
{ yyval.expr = ConstantNode::alloc( yyvsp[0].i.lineNumber, StringTable->insert("break")); ;
    break;}
case 108:
#line 448 "cmdgram.y"
{ yyval.expr = SlotAccessNode::alloc( yyvsp[0].slot.lineNumber, yyvsp[0].slot.object, yyvsp[0].slot.array, yyvsp[0].slot.slotName ); ;
    break;}
case 109:
#line 450 "cmdgram.y"
{ yyval.expr = InternalSlotAccessNode::alloc( yyvsp[0].intslot.lineNumber, yyvsp[0].intslot.object, yyvsp[0].intslot.slotExpr, yyvsp[0].intslot.recurse); ;
    break;}
case 110:
#line 452 "cmdgram.y"
{ yyval.expr = ConstantNode::alloc( yyvsp[0].s.lineNumber, yyvsp[0].s.value ); ;
    break;}
case 111:
#line 454 "cmdgram.y"
{ yyval.expr = StrConstNode::alloc( yyvsp[0].str.lineNumber, yyvsp[0].str.value, false); ;
    break;}
case 112:
#line 456 "cmdgram.y"
{ yyval.expr = (ExprNode*)VarNode::alloc( yyvsp[0].s.lineNumber, yyvsp[0].s.value, NULL); ;
    break;}
case 113:
#line 458 "cmdgram.y"
{ yyval.expr = (ExprNode*)VarNode::alloc( yyvsp[-3].s.lineNumber, yyvsp[-3].s.value, yyvsp[-1].expr ); ;
    break;}
case 114:
#line 460 "cmdgram.y"
{
         const U32 bufLen = 64;
         UTF8 buffer[bufLen];
         dSprintf(buffer, bufLen, "__anonymous_function%d", gAnonFunctionID++);
         StringTableEntry fName = StringTable->insert(buffer);
         StmtNode *fndef = FunctionDeclStmtNode::alloc(yyvsp[-6].i.lineNumber, fName, NULL, yyvsp[-4].var, yyvsp[-1].stmt);

         if(!gAnonFunctionList)
            gAnonFunctionList = fndef;
         else
            gAnonFunctionList->append(fndef);

         yyval.expr = StrConstNode::alloc( yyvsp[-6].i.lineNumber, (UTF8*)fName, false );
      ;
    break;}
case 115:
#line 478 "cmdgram.y"
{ yyval.slot.lineNumber = yyvsp[-2].expr->dbgLineNumber; yyval.slot.object = yyvsp[-2].expr; yyval.slot.slotName = yyvsp[0].s.value; yyval.slot.array = NULL; ;
    break;}
case 116:
#line 480 "cmdgram.y"
{ yyval.slot.lineNumber = yyvsp[-5].expr->dbgLineNumber; yyval.slot.object = yyvsp[-5].expr; yyval.slot.slotName = yyvsp[-3].s.value; yyval.slot.array = yyvsp[-1].expr; ;
    break;}
case 117:
#line 485 "cmdgram.y"
{ yyval.intslot.lineNumber = yyvsp[-2].expr->dbgLineNumber; yyval.intslot.object = yyvsp[-2].expr; yyval.intslot.slotExpr = yyvsp[0].expr; yyval.intslot.recurse = false; ;
    break;}
case 118:
#line 487 "cmdgram.y"
{ yyval.intslot.lineNumber = yyvsp[-2].expr->dbgLineNumber; yyval.intslot.object = yyvsp[-2].expr; yyval.intslot.slotExpr = yyvsp[0].expr; yyval.intslot.recurse = true; ;
    break;}
case 119:
#line 492 "cmdgram.y"
{ yyval.expr = ConstantNode::alloc( yyvsp[0].s.lineNumber, yyvsp[0].s.value ); ;
    break;}
case 120:
#line 494 "cmdgram.y"
{ yyval.expr = yyvsp[-1].expr; ;
    break;}
case 121:
#line 499 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[0].i.lineNumber; yyval.asn.token = '+'; yyval.asn.expr = FloatNode::alloc( yyvsp[0].i.lineNumber, 1 ); ;
    break;}
case 122:
#line 501 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[0].i.lineNumber; yyval.asn.token = '-'; yyval.asn.expr = FloatNode::alloc( yyvsp[0].i.lineNumber, 1 ); ;
    break;}
case 123:
#line 503 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '+'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 124:
#line 505 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '-'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 125:
#line 507 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '*'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 126:
#line 509 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '/'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 127:
#line 511 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '%'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 128:
#line 513 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '&'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 129:
#line 515 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '^'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 130:
#line 517 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = '|'; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 131:
#line 519 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = opSHL; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 132:
#line 521 "cmdgram.y"
{ yyval.asn.lineNumber = yyvsp[-1].i.lineNumber; yyval.asn.token = opSHR; yyval.asn.expr = yyvsp[0].expr; ;
    break;}
case 133:
#line 526 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 134:
#line 528 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 135:
#line 530 "cmdgram.y"
{ yyval.expr = yyvsp[0].od; ;
    break;}
case 136:
#line 532 "cmdgram.y"
{ yyval.expr = AssignExprNode::alloc( yyvsp[-2].s.lineNumber, yyvsp[-2].s.value, NULL, yyvsp[0].expr); ;
    break;}
case 137:
#line 534 "cmdgram.y"
{ yyval.expr = AssignExprNode::alloc( yyvsp[-5].s.lineNumber, yyvsp[-5].s.value, yyvsp[-3].expr, yyvsp[0].expr); ;
    break;}
case 138:
#line 536 "cmdgram.y"
{ yyval.expr = AssignOpExprNode::alloc( yyvsp[-1].s.lineNumber, yyvsp[-1].s.value, NULL, yyvsp[0].asn.expr, yyvsp[0].asn.token); ;
    break;}
case 139:
#line 538 "cmdgram.y"
{ yyval.expr = AssignOpExprNode::alloc( yyvsp[-4].s.lineNumber, yyvsp[-4].s.value, yyvsp[-2].expr, yyvsp[0].asn.expr, yyvsp[0].asn.token); ;
    break;}
case 140:
#line 540 "cmdgram.y"
{ yyval.expr = SlotAssignOpNode::alloc( yyvsp[-1].slot.lineNumber, yyvsp[-1].slot.object, yyvsp[-1].slot.slotName, yyvsp[-1].slot.array, yyvsp[0].asn.token, yyvsp[0].asn.expr); ;
    break;}
case 141:
#line 542 "cmdgram.y"
{ yyval.expr = SlotAssignNode::alloc( yyvsp[-2].slot.lineNumber, yyvsp[-2].slot.object, yyvsp[-2].slot.array, yyvsp[-2].slot.slotName, yyvsp[0].expr); ;
    break;}
case 142:
#line 544 "cmdgram.y"
{ yyval.expr = SlotAssignNode::alloc( yyvsp[-4].slot.lineNumber, yyvsp[-4].slot.object, yyvsp[-4].slot.array, yyvsp[-4].slot.slotName, yyvsp[-1].expr); ;
    break;}
case 143:
#line 549 "cmdgram.y"
{ yyval.expr = FuncCallExprNode::alloc( yyvsp[-3].s.lineNumber, yyvsp[-3].s.value, NULL, yyvsp[-1].expr, false); ;
    break;}
case 144:
#line 551 "cmdgram.y"
{ yyval.expr = FuncCallExprNode::alloc( yyvsp[-5].s.lineNumber, yyvsp[-3].s.value, yyvsp[-5].s.value, yyvsp[-1].expr, false); ;
    break;}
case 145:
#line 553 "cmdgram.y"
{ yyvsp[-5].expr->append(yyvsp[-1].expr); yyval.expr = FuncCallExprNode::alloc( yyvsp[-5].expr->dbgLineNumber, yyvsp[-3].s.value, NULL, yyvsp[-5].expr, true); ;
    break;}
case 146:
#line 558 "cmdgram.y"
{ yyval.expr = AssertCallExprNode::alloc( yyvsp[-3].i.lineNumber, yyvsp[-1].expr, NULL ); ;
    break;}
case 147:
#line 560 "cmdgram.y"
{ yyval.expr = AssertCallExprNode::alloc( yyvsp[-5].i.lineNumber, yyvsp[-3].expr, yyvsp[-1].str.value ); ;
    break;}
case 148:
#line 565 "cmdgram.y"
{ yyval.expr = NULL; ;
    break;}
case 149:
#line 567 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 150:
#line 572 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 151:
#line 574 "cmdgram.y"
{ (yyvsp[-2].expr)->append(yyvsp[0].expr); yyval.expr = yyvsp[-2].expr; ;
    break;}
case 152:
#line 579 "cmdgram.y"
{ yyval.slist = NULL; ;
    break;}
case 153:
#line 581 "cmdgram.y"
{ yyval.slist = yyvsp[0].slist; ;
    break;}
case 154:
#line 586 "cmdgram.y"
{ yyval.slist = yyvsp[0].slist; ;
    break;}
case 155:
#line 588 "cmdgram.y"
{ yyvsp[-1].slist->append(yyvsp[0].slist); yyval.slist = yyvsp[-1].slist; ;
    break;}
case 156:
#line 593 "cmdgram.y"
{ yyval.slist = SlotAssignNode::alloc( yyvsp[-3].s.lineNumber, NULL, NULL, yyvsp[-3].s.value, yyvsp[-1].expr); ;
    break;}
case 157:
#line 595 "cmdgram.y"
{ yyval.slist = SlotAssignNode::alloc( yyvsp[-4].i.lineNumber, NULL, NULL, yyvsp[-3].s.value, yyvsp[-1].expr, yyvsp[-4].i.value); ;
    break;}
case 158:
#line 597 "cmdgram.y"
{ yyval.slist = SlotAssignNode::alloc( yyvsp[-3].i.lineNumber, NULL, NULL, StringTable->insert("datablock"), yyvsp[-1].expr); ;
    break;}
case 159:
#line 599 "cmdgram.y"
{ yyval.slist = SlotAssignNode::alloc( yyvsp[-6].s.lineNumber, NULL, yyvsp[-4].expr, yyvsp[-6].s.value, yyvsp[-1].expr); ;
    break;}
case 160:
#line 601 "cmdgram.y"
{ yyval.slist = SlotAssignNode::alloc( yyvsp[-7].i.lineNumber, NULL, yyvsp[-4].expr, yyvsp[-6].s.value, yyvsp[-1].expr, yyvsp[-7].i.value); ;
    break;}
case 161:
#line 606 "cmdgram.y"
{ yyval.expr = yyvsp[0].expr; ;
    break;}
case 162:
#line 608 "cmdgram.y"
{ yyval.expr = CommaCatExprNode::alloc( yyvsp[-2].expr->dbgLineNumber, yyvsp[-2].expr, yyvsp[0].expr); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 610 "cmdgram.y"
=======
  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 162 "CMDgram.y"
    { ;}
    break;

  case 3:
#line 167 "CMDgram.y"
    { (yyval.stmt) = nil; ;}
    break;

  case 4:
#line 169 "CMDgram.y"
    { if(!gStatementList) { gStatementList = (yyvsp[(2) - (2)].stmt); } else { gStatementList->append((yyvsp[(2) - (2)].stmt)); } ;}
    break;

  case 5:
#line 174 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 6:
#line 176 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 7:
#line 178 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 8:
#line 183 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(4) - (6)].stmt); for(StmtNode *walk = ((yyvsp[(4) - (6)].stmt));walk;walk = walk->getNext() ) walk->setPackage((yyvsp[(2) - (6)].s).value); ;}
    break;

  case 9:
#line 188 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 10:
#line 190 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (2)].stmt); ((yyvsp[(1) - (2)].stmt))->append((yyvsp[(2) - (2)].stmt));  ;}
    break;

  case 11:
#line 195 "CMDgram.y"
    { (yyval.stmt) = nil; ;}
    break;

  case 12:
#line 197 "CMDgram.y"
    { if(!(yyvsp[(1) - (2)].stmt)) { (yyval.stmt) = (yyvsp[(2) - (2)].stmt); } else { ((yyvsp[(1) - (2)].stmt))->append((yyvsp[(2) - (2)].stmt)); (yyval.stmt) = (yyvsp[(1) - (2)].stmt); } ;}
    break;

  case 19:
#line 208 "CMDgram.y"
    { (yyval.stmt) = BreakStmtNode::alloc( (yyvsp[(1) - (2)].i).lineNumber ); ;}
    break;

  case 20:
#line 210 "CMDgram.y"
    { (yyval.stmt) = ContinueStmtNode::alloc( (yyvsp[(1) - (2)].i).lineNumber ); ;}
    break;

  case 21:
#line 212 "CMDgram.y"
    { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[(1) - (2)].i).lineNumber, NULL ); ;}
    break;

  case 22:
#line 214 "CMDgram.y"
    { (yyval.stmt) = ReturnStmtNode::alloc( (yyvsp[(1) - (3)].i).lineNumber, (yyvsp[(2) - (3)].expr) ); ;}
    break;

  case 23:
#line 216 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (2)].stmt); ;}
    break;

  case 24:
#line 218 "CMDgram.y"
    { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[(1) - (4)].s).lineNumber, (yyvsp[(1) - (4)].s).value, (yyvsp[(3) - (4)].expr), NULL ); ;}
    break;

  case 25:
#line 220 "CMDgram.y"
    { (yyval.stmt) = TTagSetStmtNode::alloc( (yyvsp[(1) - (6)].s).lineNumber, (yyvsp[(1) - (6)].s).value, (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].expr) ); ;}
    break;

  case 26:
#line 222 "CMDgram.y"
    { (yyval.stmt) = StrConstNode::alloc( (yyvsp[(1) - (1)].str).lineNumber, (yyvsp[(1) - (1)].str).value, false, true ); ;}
    break;

  case 27:
#line 227 "CMDgram.y"
    { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[(1) - (8)].i).lineNumber, (yyvsp[(2) - (8)].s).value, NULL, (yyvsp[(4) - (8)].var), (yyvsp[(7) - (8)].stmt) ); ;}
    break;

  case 28:
#line 229 "CMDgram.y"
    { (yyval.stmt) = FunctionDeclStmtNode::alloc( (yyvsp[(1) - (10)].i).lineNumber, (yyvsp[(4) - (10)].s).value, (yyvsp[(2) - (10)].s).value, (yyvsp[(6) - (10)].var), (yyvsp[(9) - (10)].stmt) ); ;}
    break;

  case 29:
#line 234 "CMDgram.y"
    { (yyval.var) = NULL; ;}
    break;

  case 30:
#line 236 "CMDgram.y"
    { (yyval.var) = (yyvsp[(1) - (1)].var); ;}
    break;

  case 31:
#line 241 "CMDgram.y"
    { (yyval.var) = VarNode::alloc( (yyvsp[(1) - (1)].s).lineNumber, (yyvsp[(1) - (1)].s).value, NULL ); ;}
    break;

  case 32:
#line 243 "CMDgram.y"
    { (yyval.var) = (yyvsp[(1) - (3)].var); ((StmtNode*)((yyvsp[(1) - (3)].var)))->append((StmtNode*)VarNode::alloc( (yyvsp[(3) - (3)].s).lineNumber, (yyvsp[(3) - (3)].s).value, NULL ) ); ;}
    break;

  case 33:
#line 248 "CMDgram.y"
    { (yyval.stmt) = ObjectDeclNode::alloc( (yyvsp[(1) - (10)].i).lineNumber, (yyvsp[(2) - (10)].expr), (yyvsp[(4) - (10)].expr), NULL, (yyvsp[(5) - (10)].s).value, (yyvsp[(8) - (10)].slist), NULL, true, false, false); ;}
    break;

  case 34:
#line 253 "CMDgram.y"
    { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[(1) - (10)].i).lineNumber, (yyvsp[(2) - (10)].expr), (yyvsp[(4) - (10)].expr), (yyvsp[(6) - (10)].expr), (yyvsp[(5) - (10)].s).value, (yyvsp[(9) - (10)].odcl).slots, (yyvsp[(9) - (10)].odcl).decls, false, false, false); ;}
    break;

  case 35:
#line 255 "CMDgram.y"
    { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[(1) - (7)].i).lineNumber, (yyvsp[(2) - (7)].expr), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), (yyvsp[(5) - (7)].s).value, NULL, NULL, false, false, false); ;}
    break;

  case 36:
#line 257 "CMDgram.y"
    { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[(1) - (12)].i).lineNumber, (yyvsp[(2) - (12)].expr), (yyvsp[(5) - (12)].expr), (yyvsp[(8) - (12)].expr), (yyvsp[(7) - (12)].s).value, (yyvsp[(11) - (12)].odcl).slots, (yyvsp[(11) - (12)].odcl).decls, false, true, false); ;}
    break;

  case 37:
#line 259 "CMDgram.y"
    { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[(1) - (9)].i).lineNumber, (yyvsp[(2) - (9)].expr), (yyvsp[(5) - (9)].expr), (yyvsp[(8) - (9)].expr), (yyvsp[(7) - (9)].s).value, NULL, NULL, false, true, false); ;}
    break;

  case 38:
#line 261 "CMDgram.y"
    { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[(1) - (10)].i).lineNumber, (yyvsp[(2) - (10)].expr), (yyvsp[(4) - (10)].expr), (yyvsp[(6) - (10)].expr), (yyvsp[(5) - (10)].s).value, (yyvsp[(9) - (10)].odcl).slots, (yyvsp[(9) - (10)].odcl).decls, false, false, true); ;}
    break;

  case 39:
#line 263 "CMDgram.y"
    { (yyval.od) = ObjectDeclNode::alloc( (yyvsp[(1) - (7)].i).lineNumber, (yyvsp[(2) - (7)].expr), (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), (yyvsp[(5) - (7)].s).value, NULL, NULL, false, false, true); ;}
    break;

  case 40:
#line 268 "CMDgram.y"
    { (yyval.s).value = NULL; ;}
    break;

  case 41:
#line 270 "CMDgram.y"
    { (yyval.s) = (yyvsp[(2) - (2)].s); ;}
    break;

  case 42:
#line 275 "CMDgram.y"
    { (yyval.expr) = StrConstNode::alloc( CodeBlock::smCurrentParser->getCurrentLine(), "", false); ;}
    break;

  case 43:
#line 277 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 44:
#line 282 "CMDgram.y"
    { (yyval.expr) = NULL; ;}
    break;

  case 45:
#line 284 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 46:
#line 289 "CMDgram.y"
    { (yyval.odcl).slots = NULL; (yyval.odcl).decls = NULL; ;}
    break;

  case 47:
#line 291 "CMDgram.y"
    { (yyval.odcl).slots = (yyvsp[(1) - (1)].slist); (yyval.odcl).decls = NULL; ;}
    break;

  case 48:
#line 293 "CMDgram.y"
    { (yyval.odcl).slots = NULL; (yyval.odcl).decls = (yyvsp[(1) - (1)].od); ;}
    break;

  case 49:
#line 295 "CMDgram.y"
    { (yyval.odcl).slots = (yyvsp[(1) - (2)].slist); (yyval.odcl).decls = (yyvsp[(2) - (2)].od); ;}
    break;

  case 50:
#line 300 "CMDgram.y"
    { (yyval.od) = (yyvsp[(1) - (2)].od); ;}
    break;

  case 51:
#line 302 "CMDgram.y"
    { (yyvsp[(1) - (3)].od)->append((yyvsp[(2) - (3)].od)); (yyval.od) = (yyvsp[(1) - (3)].od); ;}
    break;

  case 52:
#line 307 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(2) - (3)].stmt); ;}
    break;

  case 53:
#line 309 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); ;}
    break;

  case 54:
#line 314 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(6) - (7)].ifnode); (yyvsp[(6) - (7)].ifnode)->propagateSwitchExpr((yyvsp[(3) - (7)].expr), false); ;}
    break;

  case 55:
#line 316 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(6) - (7)].ifnode); (yyvsp[(6) - (7)].ifnode)->propagateSwitchExpr((yyvsp[(3) - (7)].expr), true); ;}
    break;

  case 56:
#line 321 "CMDgram.y"
    { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[(1) - (4)].i).lineNumber, (yyvsp[(2) - (4)].expr), (yyvsp[(4) - (4)].stmt), NULL, false); ;}
    break;

  case 57:
#line 323 "CMDgram.y"
    { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[(1) - (7)].i).lineNumber, (yyvsp[(2) - (7)].expr), (yyvsp[(4) - (7)].stmt), (yyvsp[(7) - (7)].stmt), false); ;}
    break;

  case 58:
#line 325 "CMDgram.y"
    { (yyval.ifnode) = IfStmtNode::alloc( (yyvsp[(1) - (5)].i).lineNumber, (yyvsp[(2) - (5)].expr), (yyvsp[(4) - (5)].stmt), (yyvsp[(5) - (5)].ifnode), true); ;}
    break;

  case 59:
#line 330 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr);;}
    break;

  case 60:
#line 332 "CMDgram.y"
    { ((yyvsp[(1) - (3)].expr))->append((yyvsp[(3) - (3)].expr)); (yyval.expr)=(yyvsp[(1) - (3)].expr); ;}
    break;

  case 61:
#line 337 "CMDgram.y"
    { (yyval.stmt) = IfStmtNode::alloc((yyvsp[(1) - (5)].i).lineNumber, (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt), NULL, false); ;}
    break;

  case 62:
#line 339 "CMDgram.y"
    { (yyval.stmt) = IfStmtNode::alloc((yyvsp[(1) - (7)].i).lineNumber, (yyvsp[(3) - (7)].expr), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt), false); ;}
    break;

  case 63:
#line 344 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (5)].i).lineNumber, nil, (yyvsp[(3) - (5)].expr), nil, (yyvsp[(5) - (5)].stmt), false); ;}
    break;

  case 64:
#line 346 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(3) - (6)].i).lineNumber, nil, (yyvsp[(5) - (6)].expr), nil, (yyvsp[(2) - (6)].stmt), true); ;}
    break;

  case 65:
#line 351 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (9)].i).lineNumber, (yyvsp[(3) - (9)].expr), (yyvsp[(5) - (9)].expr), (yyvsp[(7) - (9)].expr), (yyvsp[(9) - (9)].stmt), false); ;}
    break;

  case 66:
#line 353 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (8)].i).lineNumber, (yyvsp[(3) - (8)].expr), (yyvsp[(5) - (8)].expr), NULL, (yyvsp[(8) - (8)].stmt), false); ;}
    break;

  case 67:
#line 355 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (8)].i).lineNumber, (yyvsp[(3) - (8)].expr), NULL, (yyvsp[(6) - (8)].expr), (yyvsp[(8) - (8)].stmt), false); ;}
    break;

  case 68:
#line 357 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (7)].i).lineNumber, (yyvsp[(3) - (7)].expr), NULL, NULL, (yyvsp[(7) - (7)].stmt), false); ;}
    break;

  case 69:
#line 359 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (8)].i).lineNumber, NULL, (yyvsp[(4) - (8)].expr), (yyvsp[(6) - (8)].expr), (yyvsp[(8) - (8)].stmt), false); ;}
    break;

  case 70:
#line 361 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (7)].i).lineNumber, NULL, (yyvsp[(4) - (7)].expr), NULL, (yyvsp[(7) - (7)].stmt), false); ;}
    break;

  case 71:
#line 363 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (7)].i).lineNumber, NULL, NULL, (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].stmt), false); ;}
    break;

  case 72:
#line 365 "CMDgram.y"
    { (yyval.stmt) = LoopStmtNode::alloc((yyvsp[(1) - (6)].i).lineNumber, NULL, NULL, NULL, (yyvsp[(6) - (6)].stmt), false); ;}
    break;

  case 73:
#line 370 "CMDgram.y"
    { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[(1) - (7)].i).lineNumber, (yyvsp[(3) - (7)].s).value, (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].stmt), false ); ;}
    break;

  case 74:
#line 372 "CMDgram.y"
    { (yyval.stmt) = IterStmtNode::alloc( (yyvsp[(1) - (7)].i).lineNumber, (yyvsp[(3) - (7)].s).value, (yyvsp[(5) - (7)].expr), (yyvsp[(7) - (7)].stmt), true ); ;}
    break;

  case 75:
#line 377 "CMDgram.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 76:
#line 382 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 77:
#line 384 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;

  case 78:
#line 386 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 79:
#line 388 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 80:
#line 390 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 81:
#line 392 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 82:
#line 394 "CMDgram.y"
    { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 83:
#line 396 "CMDgram.y"
    { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 84:
#line 398 "CMDgram.y"
    { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 85:
#line 400 "CMDgram.y"
    { (yyval.expr) = FloatBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 86:
#line 402 "CMDgram.y"
    { (yyval.expr) = FloatUnaryExprNode::alloc( (yyvsp[(1) - (2)].i).lineNumber, (yyvsp[(1) - (2)].i).value, (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 87:
#line 404 "CMDgram.y"
    { (yyval.expr) = TTagDerefNode::alloc( (yyvsp[(1) - (2)].i).lineNumber, (yyvsp[(2) - (2)].expr) ); ;}
    break;

  case 88:
#line 406 "CMDgram.y"
    { (yyval.expr) = TTagExprNode::alloc( (yyvsp[(1) - (1)].s).lineNumber, (yyvsp[(1) - (1)].s).value ); ;}
    break;

  case 89:
#line 408 "CMDgram.y"
    { (yyval.expr) = ConditionalExprNode::alloc( (yyvsp[(1) - (5)].expr)->dbgLineNumber, (yyvsp[(1) - (5)].expr), (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].expr)); ;}
    break;

  case 90:
#line 410 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 91:
#line 412 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 92:
#line 414 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 93:
#line 416 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 94:
#line 418 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 95:
#line 420 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 96:
#line 422 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 97:
#line 424 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 98:
#line 426 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 99:
#line 428 "CMDgram.y"
    { (yyval.expr) = IntBinaryExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(2) - (3)].i).value, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 100:
#line 430 "CMDgram.y"
    { (yyval.expr) = StreqExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), true); ;}
    break;

  case 101:
#line 432 "CMDgram.y"
    { (yyval.expr) = StreqExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), false); ;}
    break;

  case 102:
#line 434 "CMDgram.y"
    { (yyval.expr) = StrcatExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), (yyvsp[(2) - (3)].i).value); ;}
    break;

  case 103:
#line 436 "CMDgram.y"
    { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[(1) - (2)].i).lineNumber, (yyvsp[(1) - (2)].i).value, (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 104:
#line 438 "CMDgram.y"
    { (yyval.expr) = IntUnaryExprNode::alloc((yyvsp[(1) - (2)].i).lineNumber, (yyvsp[(1) - (2)].i).value, (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 105:
#line 440 "CMDgram.y"
    { (yyval.expr) = StrConstNode::alloc( (yyvsp[(1) - (1)].str).lineNumber, (yyvsp[(1) - (1)].str).value, true); ;}
    break;

  case 106:
#line 442 "CMDgram.y"
    { (yyval.expr) = FloatNode::alloc( (yyvsp[(1) - (1)].f).lineNumber, (yyvsp[(1) - (1)].f).value ); ;}
    break;

  case 107:
#line 444 "CMDgram.y"
    { (yyval.expr) = IntNode::alloc( (yyvsp[(1) - (1)].i).lineNumber, (yyvsp[(1) - (1)].i).value ); ;}
    break;

  case 108:
#line 446 "CMDgram.y"
    { (yyval.expr) = ConstantNode::alloc( (yyvsp[(1) - (1)].i).lineNumber, StringTable->insert("break")); ;}
    break;

  case 109:
#line 448 "CMDgram.y"
    { (yyval.expr) = SlotAccessNode::alloc( (yyvsp[(1) - (1)].slot).lineNumber, (yyvsp[(1) - (1)].slot).object, (yyvsp[(1) - (1)].slot).array, (yyvsp[(1) - (1)].slot).slotName ); ;}
    break;

  case 110:
#line 450 "CMDgram.y"
    { (yyval.expr) = InternalSlotAccessNode::alloc( (yyvsp[(1) - (1)].intslot).lineNumber, (yyvsp[(1) - (1)].intslot).object, (yyvsp[(1) - (1)].intslot).slotExpr, (yyvsp[(1) - (1)].intslot).recurse); ;}
    break;

  case 111:
#line 452 "CMDgram.y"
    { (yyval.expr) = ConstantNode::alloc( (yyvsp[(1) - (1)].s).lineNumber, (yyvsp[(1) - (1)].s).value ); ;}
    break;

  case 112:
#line 454 "CMDgram.y"
    { (yyval.expr) = StrConstNode::alloc( (yyvsp[(1) - (1)].str).lineNumber, (yyvsp[(1) - (1)].str).value, false); ;}
    break;

  case 113:
#line 456 "CMDgram.y"
    { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[(1) - (1)].s).lineNumber, (yyvsp[(1) - (1)].s).value, NULL); ;}
    break;

  case 114:
#line 458 "CMDgram.y"
    { (yyval.expr) = (ExprNode*)VarNode::alloc( (yyvsp[(1) - (4)].s).lineNumber, (yyvsp[(1) - (4)].s).value, (yyvsp[(3) - (4)].expr) ); ;}
    break;

  case 115:
#line 463 "CMDgram.y"
    { (yyval.slot).lineNumber = (yyvsp[(1) - (3)].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[(1) - (3)].expr); (yyval.slot).slotName = (yyvsp[(3) - (3)].s).value; (yyval.slot).array = NULL; ;}
    break;

  case 116:
#line 465 "CMDgram.y"
    { (yyval.slot).lineNumber = (yyvsp[(1) - (6)].expr)->dbgLineNumber; (yyval.slot).object = (yyvsp[(1) - (6)].expr); (yyval.slot).slotName = (yyvsp[(3) - (6)].s).value; (yyval.slot).array = (yyvsp[(5) - (6)].expr); ;}
    break;

  case 117:
#line 470 "CMDgram.y"
    { (yyval.intslot).lineNumber = (yyvsp[(1) - (3)].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[(1) - (3)].expr); (yyval.intslot).slotExpr = (yyvsp[(3) - (3)].expr); (yyval.intslot).recurse = false; ;}
    break;

  case 118:
#line 472 "CMDgram.y"
    { (yyval.intslot).lineNumber = (yyvsp[(1) - (3)].expr)->dbgLineNumber; (yyval.intslot).object = (yyvsp[(1) - (3)].expr); (yyval.intslot).slotExpr = (yyvsp[(3) - (3)].expr); (yyval.intslot).recurse = true; ;}
    break;

  case 119:
#line 477 "CMDgram.y"
    { (yyval.expr) = ConstantNode::alloc( (yyvsp[(1) - (1)].s).lineNumber, (yyvsp[(1) - (1)].s).value ); ;}
    break;

  case 120:
#line 479 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;

  case 121:
#line 484 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (1)].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = FloatNode::alloc( (yyvsp[(1) - (1)].i).lineNumber, 1 ); ;}
    break;

  case 122:
#line 486 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (1)].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = FloatNode::alloc( (yyvsp[(1) - (1)].i).lineNumber, 1 ); ;}
    break;

  case 123:
#line 488 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '+'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 124:
#line 490 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '-'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 125:
#line 492 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '*'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 126:
#line 494 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '/'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 127:
#line 496 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '%'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 128:
#line 498 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '&'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 129:
#line 500 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '^'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 130:
#line 502 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = '|'; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 131:
#line 504 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = opSHL; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 132:
#line 506 "CMDgram.y"
    { (yyval.asn).lineNumber = (yyvsp[(1) - (2)].i).lineNumber; (yyval.asn).token = opSHR; (yyval.asn).expr = (yyvsp[(2) - (2)].expr); ;}
    break;

  case 133:
#line 511 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 134:
#line 513 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 135:
#line 515 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].od); ;}
    break;

  case 136:
#line 517 "CMDgram.y"
    { (yyval.expr) = AssignExprNode::alloc( (yyvsp[(1) - (3)].s).lineNumber, (yyvsp[(1) - (3)].s).value, NULL, (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 137:
#line 519 "CMDgram.y"
    { (yyval.expr) = AssignExprNode::alloc( (yyvsp[(1) - (6)].s).lineNumber, (yyvsp[(1) - (6)].s).value, (yyvsp[(3) - (6)].expr), (yyvsp[(6) - (6)].expr)); ;}
    break;

  case 138:
#line 521 "CMDgram.y"
    { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[(1) - (2)].s).lineNumber, (yyvsp[(1) - (2)].s).value, NULL, (yyvsp[(2) - (2)].asn).expr, (yyvsp[(2) - (2)].asn).token); ;}
    break;

  case 139:
#line 523 "CMDgram.y"
    { (yyval.expr) = AssignOpExprNode::alloc( (yyvsp[(1) - (5)].s).lineNumber, (yyvsp[(1) - (5)].s).value, (yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].asn).expr, (yyvsp[(5) - (5)].asn).token); ;}
    break;

  case 140:
#line 525 "CMDgram.y"
    { (yyval.expr) = SlotAssignOpNode::alloc( (yyvsp[(1) - (2)].slot).lineNumber, (yyvsp[(1) - (2)].slot).object, (yyvsp[(1) - (2)].slot).slotName, (yyvsp[(1) - (2)].slot).array, (yyvsp[(2) - (2)].asn).token, (yyvsp[(2) - (2)].asn).expr); ;}
    break;

  case 141:
#line 527 "CMDgram.y"
    { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[(1) - (3)].slot).lineNumber, (yyvsp[(1) - (3)].slot).object, (yyvsp[(1) - (3)].slot).array, (yyvsp[(1) - (3)].slot).slotName, (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 142:
#line 529 "CMDgram.y"
    { (yyval.expr) = SlotAssignNode::alloc( (yyvsp[(1) - (5)].slot).lineNumber, (yyvsp[(1) - (5)].slot).object, (yyvsp[(1) - (5)].slot).array, (yyvsp[(1) - (5)].slot).slotName, (yyvsp[(4) - (5)].expr)); ;}
    break;

  case 143:
#line 534 "CMDgram.y"
    { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[(1) - (4)].s).lineNumber, (yyvsp[(1) - (4)].s).value, NULL, (yyvsp[(3) - (4)].expr), false); ;}
    break;

  case 144:
#line 536 "CMDgram.y"
    { (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[(1) - (6)].s).lineNumber, (yyvsp[(3) - (6)].s).value, (yyvsp[(1) - (6)].s).value, (yyvsp[(5) - (6)].expr), false); ;}
    break;

  case 145:
#line 538 "CMDgram.y"
    { (yyvsp[(1) - (6)].expr)->append((yyvsp[(5) - (6)].expr)); (yyval.expr) = FuncCallExprNode::alloc( (yyvsp[(1) - (6)].expr)->dbgLineNumber, (yyvsp[(3) - (6)].s).value, NULL, (yyvsp[(1) - (6)].expr), true); ;}
    break;

  case 146:
#line 543 "CMDgram.y"
    { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[(1) - (4)].i).lineNumber, (yyvsp[(3) - (4)].expr), NULL ); ;}
    break;

  case 147:
#line 545 "CMDgram.y"
    { (yyval.expr) = AssertCallExprNode::alloc( (yyvsp[(1) - (6)].i).lineNumber, (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].str).value ); ;}
    break;

  case 148:
#line 550 "CMDgram.y"
    { (yyval.expr) = NULL; ;}
    break;

  case 149:
#line 552 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 150:
#line 557 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 151:
#line 559 "CMDgram.y"
    { ((yyvsp[(1) - (3)].expr))->append((yyvsp[(3) - (3)].expr)); (yyval.expr) = (yyvsp[(1) - (3)].expr); ;}
    break;

  case 152:
#line 564 "CMDgram.y"
    { (yyval.slist) = NULL; ;}
    break;

  case 153:
#line 566 "CMDgram.y"
    { (yyval.slist) = (yyvsp[(1) - (1)].slist); ;}
    break;

  case 154:
#line 571 "CMDgram.y"
    { (yyval.slist) = (yyvsp[(1) - (1)].slist); ;}
    break;

  case 155:
#line 573 "CMDgram.y"
    { (yyvsp[(1) - (2)].slist)->append((yyvsp[(2) - (2)].slist)); (yyval.slist) = (yyvsp[(1) - (2)].slist); ;}
    break;

  case 156:
#line 578 "CMDgram.y"
    { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[(1) - (4)].s).lineNumber, NULL, NULL, (yyvsp[(1) - (4)].s).value, (yyvsp[(3) - (4)].expr)); ;}
    break;

  case 157:
#line 580 "CMDgram.y"
    { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[(1) - (5)].i).lineNumber, NULL, NULL, (yyvsp[(2) - (5)].s).value, (yyvsp[(4) - (5)].expr), (yyvsp[(1) - (5)].i).value); ;}
    break;

  case 158:
#line 582 "CMDgram.y"
    { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[(1) - (4)].i).lineNumber, NULL, NULL, StringTable->insert("datablock"), (yyvsp[(3) - (4)].expr)); ;}
    break;

  case 159:
#line 584 "CMDgram.y"
    { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[(1) - (7)].s).lineNumber, NULL, (yyvsp[(3) - (7)].expr), (yyvsp[(1) - (7)].s).value, (yyvsp[(6) - (7)].expr)); ;}
    break;

  case 160:
#line 586 "CMDgram.y"
    { (yyval.slist) = SlotAssignNode::alloc( (yyvsp[(1) - (8)].i).lineNumber, NULL, (yyvsp[(4) - (8)].expr), (yyvsp[(2) - (8)].s).value, (yyvsp[(7) - (8)].expr), (yyvsp[(1) - (8)].i).value); ;}
    break;

  case 161:
#line 591 "CMDgram.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 162:
#line 593 "CMDgram.y"
    { (yyval.expr) = CommaCatExprNode::alloc( (yyvsp[(1) - (3)].expr)->dbgLineNumber, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3148 "cmdgram.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 595 "CMDgram.y"

>>>>>>> omni_engine


