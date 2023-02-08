#define YY_parse_h_included
/*#define YY_USE_CLASS 
*/
/*  A Bison++ parser, made from abst.y  */

 /* with Bison++ version bison++ Version 1.21.9-1, adapted from GNU bison by coetmeur@icdc.fr
Maintained by Magnus Ekdahl <magnus@debian.org>
  */


#line 1 "/usr/share/bison++/bison.cc"
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  

   As a special exception, when this file is copied by Bison++ into a
   Bison++ output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison, and has been in Bison++ since 1.21.9.  

*/

/* HEADER SECTION */
#if defined( _MSDOS ) || defined(MSDOS) || defined(__MSDOS__) 
 #define __MSDOS_AND_ALIKE
#endif

#if defined(_WINDOWS) && defined(_MSC_VER)
 #define __HAVE_NO_ALLOCA
 #define __MSDOS_AND_ALIKE
#endif

#ifndef alloca
 #if defined( __GNUC__)
  #define alloca __builtin_alloca

 #elif (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc)  || defined (__sgi)
  #include <alloca.h>

 #elif defined (__MSDOS_AND_ALIKE)
  #include <malloc.h>
  #ifndef __TURBOC__
   /* MS C runtime lib */
   #define alloca _alloca
  #endif

 #elif defined(_AIX)
  /* pragma must be put before any C/C++ instruction !! */
  #pragma alloca
  #include <malloc.h>

 #elif defined(__hpux)
  #ifdef __cplusplus
   extern "C" {
     void *alloca (unsigned int);
   };
  #else /* not __cplusplus */
   void *alloca ();
  #endif /* not __cplusplus */

 #endif /* not _AIX  not MSDOS, or __TURBOC__ or _AIX, not sparc.  */
#endif /* alloca not defined.  */

#ifdef c_plusplus
 #ifndef __cplusplus
  #define __cplusplus
 #endif
#endif

#ifdef __cplusplus
 #ifndef YY_USE_CLASS
/*#warning "For C++ its recomended to use bison++, otherwise classes won't be generated"*/
 #endif
#else
 #ifndef __STDC__
  #define const
 #endif
 #ifdef YY_USE_CLASS
  #error "This is a C++ header generated by bison++, please use a C++ compiler!"
 #endif
#endif

#include <stdio.h>
#define YYBISON 1  

 #line 88 "/usr/share/bison++/bison.cc"
#line 1 "abst.y"

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct quad
{
char op[5];
char arg1[10];
char arg2[10];
char result[10];
}QUAD[30];
struct stack
{
int items[100];
int top;
}stk;
int Index=0,tIndex=0,StNo,Ind,tInd;
extern int LineNo;

#line 20 "abst.y"
typedef union
{
char var[10];
} yy_parse_stype;
#define YY_parse_STYPE yy_parse_stype
#ifndef YY_USE_CLASS
#define YYSTYPE yy_parse_stype
#endif

#line 88 "/usr/share/bison++/bison.cc"
/* %{ and %header{ and %union, during decl */
#define YY_parse_BISON 1

#ifndef YY_parse_COMPATIBILITY
 #ifndef YY_USE_CLASS
  #define  YY_parse_COMPATIBILITY 1
 #else
  #define  YY_parse_COMPATIBILITY 0
 #endif
#endif

#if YY_parse_COMPATIBILITY != 0
 /* backward compatibility */
 #ifdef YYLTYPE
  #ifndef YY_parse_LTYPE
   #define YY_parse_LTYPE YYLTYPE
  #endif
 #endif
/* Testing alternative bison solution
   /#ifdef YYSTYPE*/
#ifndef YY_parse_STYPE 
   #define YY_parse_STYPE YYSTYPE
#endif
/*#endif*/
 #ifdef YYDEBUG
  #ifndef YY_parse_DEBUG
   #define  YY_parse_DEBUG YYDEBUG
  #endif
 #endif
 
 /* use goto to be compatible */
 #ifndef YY_parse_USE_GOTO
  #define YY_parse_USE_GOTO 1
 #endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_parse_USE_GOTO
 #define YY_parse_USE_GOTO 0
#endif

#ifndef YY_parse_PURE

 #line 130 "/usr/share/bison++/bison.cc"

#line 130 "/usr/share/bison++/bison.cc"
/*  YY_parse_PURE */
#endif

/* section apres lecture def, avant lecture grammaire S2 */

 #line 134 "/usr/share/bison++/bison.cc"

#line 134 "/usr/share/bison++/bison.cc"
/* prefix */
#ifndef YY_parse_DEBUG

 #line 136 "/usr/share/bison++/bison.cc"

#line 136 "/usr/share/bison++/bison.cc"
/* YY_parse_DEBUG */
#endif


#ifndef YY_parse_LSP_NEEDED

 #line 141 "/usr/share/bison++/bison.cc"

#line 141 "/usr/share/bison++/bison.cc"
 /* YY_parse_LSP_NEEDED*/
#endif



/* DEFAULT LTYPE*/
#ifdef YY_parse_LSP_NEEDED
#ifndef YY_parse_LTYPE
#ifndef BISON_YYLTYPE_ISDECLARED
#define BISON_YYLTYPE_ISDECLARED
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

#endif
#define YY_parse_LTYPE yyltype
#endif
#endif
/* DEFAULT STYPE*/
      /* We used to use `unsigned long' as YY_parse_STYPE on MSDOS,
	 but it seems better to be consistent.
	 Most programs should declare their own type anyway.  */

#ifndef YY_parse_STYPE
#define YY_parse_STYPE int
#endif
/* DEFAULT MISCELANEOUS */
#ifndef YY_parse_PARSE
#define YY_parse_PARSE yyparse
#endif
#ifndef YY_parse_LEX
#define YY_parse_LEX yylex
#endif
#ifndef YY_parse_LVAL
#define YY_parse_LVAL yylval
#endif
#ifndef YY_parse_LLOC
#define YY_parse_LLOC yylloc
#endif
#ifndef YY_parse_CHAR
#define YY_parse_CHAR yychar
#endif
#ifndef YY_parse_NERRS
#define YY_parse_NERRS yynerrs
#endif
#ifndef YY_parse_DEBUG_FLAG
#define YY_parse_DEBUG_FLAG yydebug
#endif
#ifndef YY_parse_ERROR
#define YY_parse_ERROR yyerror
#endif

#ifndef YY_parse_PARSE_PARAM
 #ifndef YY_USE_CLASS
  #ifdef YYPARSE_PARAM
   #define YY_parse_PARSE_PARAM void* YYPARSE_PARAM 
  #else
   #ifndef __STDC__
    #ifndef __cplusplus
     #define YY_parse_PARSE_PARAM
    #endif
   #endif
  #endif
 #endif
 #ifndef YY_parse_PARSE_PARAM
  #define YY_parse_PARSE_PARAM void
 #endif
#endif

#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
#ifdef YY_parse_LTYPE
#ifndef YYLTYPE
#define YYLTYPE YY_parse_LTYPE
#else
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
#endif
#endif

/* Removed due to bison compabilityproblems
/#ifndef YYSTYPE
/#define YYSTYPE YY_parse_STYPE
/#else*/
/* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
/*#endif*/

#ifdef YY_parse_PURE
#  ifndef YYPURE
#    define YYPURE YY_parse_PURE
#  endif
#endif

#ifdef YY_parse_DEBUG
#  ifndef YYDEBUG
#    define YYDEBUG YY_parse_DEBUG 
#  endif
#endif

#ifndef YY_parse_ERROR_VERBOSE
 #ifdef YYERROR_VERBOSE
  #define YY_parse_ERROR_VERBOSE YYERROR_VERBOSE
 #endif
#endif

#ifndef YY_parse_LSP_NEEDED
#  ifdef YYLSP_NEEDED
#    define YY_parse_LSP_NEEDED YYLSP_NEEDED
#  endif
#endif

#endif

#ifndef YY_USE_CLASS
/* TOKEN C */

 #line 263 "/usr/share/bison++/bison.cc"
#define	NUM	258
#define	VAR	259
#define	RELOP	260
#define	MAIN	261
#define	IF	262
#define	ELSE	263
#define	WHILE	264
#define	TYPE	265


#line 263 "/usr/share/bison++/bison.cc"
 /* #defines tokens */
#else
/* CLASS */
#ifndef YY_parse_CLASS
#define YY_parse_CLASS parse
#endif
#ifndef YY_parse_INHERIT
#define YY_parse_INHERIT
#endif
#ifndef YY_parse_MEMBERS
#define YY_parse_MEMBERS 
#endif
#ifndef YY_parse_LEX_BODY
#define YY_parse_LEX_BODY  
#endif
#ifndef YY_parse_ERROR_BODY
#define YY_parse_ERROR_BODY  
#endif
#ifndef YY_parse_CONSTRUCTOR_PARAM
#define YY_parse_CONSTRUCTOR_PARAM
#endif
#ifndef YY_parse_CONSTRUCTOR_CODE
#define YY_parse_CONSTRUCTOR_CODE
#endif
#ifndef YY_parse_CONSTRUCTOR_INIT
#define YY_parse_CONSTRUCTOR_INIT
#endif
/* choose between enum and const */
#ifndef YY_parse_USE_CONST_TOKEN
#define YY_parse_USE_CONST_TOKEN 0
/* yes enum is more compatible with flex,  */
/* so by default we use it */ 
#endif
#if YY_parse_USE_CONST_TOKEN != 0
#ifndef YY_parse_ENUM_TOKEN
#define YY_parse_ENUM_TOKEN yy_parse_enum_token
#endif
#endif

class YY_parse_CLASS YY_parse_INHERIT
{
public: 
#if YY_parse_USE_CONST_TOKEN != 0
/* static const int token ... */

 #line 307 "/usr/share/bison++/bison.cc"
static const int NUM;
static const int VAR;
static const int RELOP;
static const int MAIN;
static const int IF;
static const int ELSE;
static const int WHILE;
static const int TYPE;


#line 307 "/usr/share/bison++/bison.cc"
 /* decl const */
#else
enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0

 #line 310 "/usr/share/bison++/bison.cc"
	,NUM=258
	,VAR=259
	,RELOP=260
	,MAIN=261
	,IF=262
	,ELSE=263
	,WHILE=264
	,TYPE=265


#line 310 "/usr/share/bison++/bison.cc"
 /* enum token */
     }; /* end of enum declaration */
#endif
public:
 int YY_parse_PARSE (YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
#ifdef YY_parse_PURE
#ifdef YY_parse_LSP_NEEDED
 virtual int  YY_parse_LEX (YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
#else
 virtual int  YY_parse_LEX (YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
#endif
#else
 virtual int YY_parse_LEX() YY_parse_LEX_BODY;
 YY_parse_STYPE YY_parse_LVAL;
#ifdef YY_parse_LSP_NEEDED
 YY_parse_LTYPE YY_parse_LLOC;
#endif
 int   YY_parse_NERRS;
 int    YY_parse_CHAR;
#endif
#if YY_parse_DEBUG != 0
 int YY_parse_DEBUG_FLAG;   /*  nonzero means print parse trace     */
#endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#if YY_parse_USE_CONST_TOKEN != 0

 #line 341 "/usr/share/bison++/bison.cc"
const int YY_parse_CLASS::NUM=258;
const int YY_parse_CLASS::VAR=259;
const int YY_parse_CLASS::RELOP=260;
const int YY_parse_CLASS::MAIN=261;
const int YY_parse_CLASS::IF=262;
const int YY_parse_CLASS::ELSE=263;
const int YY_parse_CLASS::WHILE=264;
const int YY_parse_CLASS::TYPE=265;


#line 341 "/usr/share/bison++/bison.cc"
 /* const YY_parse_CLASS::token */
#endif
/*apres const  */
YY_parse_CLASS::YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM) YY_parse_CONSTRUCTOR_INIT
{
#if YY_parse_DEBUG != 0
YY_parse_DEBUG_FLAG=0;
#endif
YY_parse_CONSTRUCTOR_CODE;
};
#endif

 #line 352 "/usr/share/bison++/bison.cc"


#define	YYFINAL		62
#define	YYFLAG		-32768
#define	YYNTBASE	22

#define YYTRANSLATE(x) ((unsigned)(x) <= 265 ? yytranslate[x] : 39)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
    21,    13,    12,    18,    11,     2,    14,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    17,     2,
    19,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    15,     2,    16,     2,     2,     2,     2,     2,
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
     6,     7,     8,     9,    10
};

#if YY_parse_DEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     7,     9,    12,    14,    17,    20,    22,    24,
    27,    31,    33,    37,    41,    45,    49,    53,    56,    60,
    62,    64,    66,    69,    70,    77,    78,    82,    86,    88,
    90,    92,    93
};

static const short yyrhs[] = {     6,
    23,     0,    15,    24,    16,     0,    23,     0,    25,    24,
     0,    25,     0,    26,    17,     0,    28,    17,     0,    30,
     0,    36,     0,    10,    27,     0,     4,    18,    27,     0,
     4,     0,     4,    19,    29,     0,    29,    12,    29,     0,
    29,    11,    29,     0,    29,    13,    29,     0,    29,    14,
    29,     0,    11,    29,     0,    20,    29,    21,     0,     4,
     0,     3,     0,    31,     0,    31,    33,     0,     0,     7,
    20,    35,    21,    32,    23,     0,     0,     8,    34,    23,
     0,     4,     5,     4,     0,     4,     0,     3,     0,    37,
     0,     0,     9,    20,    35,    21,    38,    23,     0
};

#endif

#if (YY_parse_DEBUG != 0) || defined(YY_parse_ERROR_VERBOSE) 
static const short yyrline[] = { 0,
    30,    32,    34,    35,    36,    38,    39,    41,    42,    44,
    46,    47,    49,    57,    58,    59,    60,    61,    62,    63,
    64,    66,    72,    74,    82,    90,    97,   101,   104,   105,
   107,   114,   122
};

static const char * const yytname[] = {   "$","error","$illegal.","NUM","VAR",
"RELOP","MAIN","IF","ELSE","WHILE","TYPE","'-'","'+'","'*'","'/'","'{'","'}'",
"';'","','","'='","'('","')'","PROGRAM","BLOCK","CODE","STATEMENT","DESCT","VARLIST",
"ASSIGNMENT","EXPR","CONDST","IFST","@1","ELSEST","@2","CONDITION","WHILEST",
"WHILELOOP","@3",""
};
#endif

static const short yyr1[] = {     0,
    22,    23,    24,    24,    24,    25,    25,    25,    25,    26,
    27,    27,    28,    29,    29,    29,    29,    29,    29,    29,
    29,    30,    30,    32,    31,    34,    33,    35,    35,    35,
    36,    38,    37
};

static const short yyr2[] = {     0,
     2,     3,     1,     2,     1,     2,     2,     1,     1,     2,
     3,     1,     3,     3,     3,     3,     3,     2,     3,     1,
     1,     1,     2,     0,     6,     0,     3,     3,     1,     1,
     1,     0,     6
};

static const short yydefact[] = {     0,
     0,     0,     1,     0,     0,     0,     0,     3,     0,     5,
     0,     0,     8,    22,     9,    31,     0,     0,     0,    12,
    10,     2,     4,     6,     7,    26,    23,    21,    20,     0,
     0,    13,    30,    29,     0,     0,     0,     0,    18,     0,
     0,     0,     0,     0,     0,    24,    32,    11,    27,    19,
    15,    14,    16,    17,    28,     0,     0,    25,    33,     0,
     0,     0
};

static const short yydefgoto[] = {    60,
     8,     9,    10,    11,    21,    12,    32,    13,    14,    56,
    27,    38,    35,    15,    16,    57
};

static const short yypact[] = {     6,
     5,    15,-32768,     2,    -7,     3,    24,-32768,    19,    15,
    12,    21,-32768,    28,-32768,-32768,    -2,     7,     7,    22,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    -2,
    -2,    -6,-32768,    34,    23,    25,    24,     5,    13,    20,
    -2,    -2,    -2,    -2,    38,-32768,-32768,-32768,-32768,-32768,
    13,    13,-32768,-32768,-32768,     5,     5,-32768,-32768,    43,
    45,-32768
};

static const short yypgoto[] = {-32768,
    -1,    37,-32768,-32768,    11,-32768,   -27,-32768,-32768,-32768,
-32768,-32768,    30,-32768,-32768,-32768
};


#define	YYLAST		56


static const short yytable[] = {     3,
    28,    29,    39,    40,    41,    42,    43,    44,    30,    33,
    34,     1,    18,    51,    52,    53,    54,    31,     4,     2,
    17,     5,    19,     6,     7,    43,    44,    20,    24,     2,
    41,    42,    43,    44,    22,    26,    49,    25,    45,    37,
    50,    55,    61,    46,    62,    47,    23,    48,    36,     0,
     0,     0,     0,     0,    58,    59
};

static const short yycheck[] = {     1,
     3,     4,    30,    31,    11,    12,    13,    14,    11,     3,
     4,     6,    20,    41,    42,    43,    44,    20,     4,    15,
    19,     7,    20,     9,    10,    13,    14,     4,    17,    15,
    11,    12,    13,    14,    16,     8,    38,    17,     5,    18,
    21,     4,     0,    21,     0,    21,    10,    37,    19,    -1,
    -1,    -1,    -1,    -1,    56,    57
};

#line 352 "/usr/share/bison++/bison.cc"
 /* fattrs + tables */

/* parser code folow  */


/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: dollar marks section change
   the next  is replaced by the list of actions, each action
   as one case of the switch.  */ 

#if YY_parse_USE_GOTO != 0
/* 
 SUPRESSION OF GOTO : on some C++ compiler (sun c++)
  the goto is strictly forbidden if any constructor/destructor
  is used in the whole function (very stupid isn't it ?)
 so goto are to be replaced with a 'while/switch/case construct'
 here are the macro to keep some apparent compatibility
*/
#define YYGOTO(lb) {yy_gotostate=lb;continue;}
#define YYBEGINGOTO  enum yy_labels yy_gotostate=yygotostart; \
                     for(;;) switch(yy_gotostate) { case yygotostart: {
#define YYLABEL(lb) } case lb: {
#define YYENDGOTO } } 
#define YYBEGINDECLARELABEL enum yy_labels {yygotostart
#define YYDECLARELABEL(lb) ,lb
#define YYENDDECLARELABEL  };
#else
/* macro to keep goto */
#define YYGOTO(lb) goto lb
#define YYBEGINGOTO 
#define YYLABEL(lb) lb:
#define YYENDGOTO
#define YYBEGINDECLARELABEL 
#define YYDECLARELABEL(lb)
#define YYENDDECLARELABEL 
#endif
/* LABEL DECLARATION */
YYBEGINDECLARELABEL
  YYDECLARELABEL(yynewstate)
  YYDECLARELABEL(yybackup)
/* YYDECLARELABEL(yyresume) */
  YYDECLARELABEL(yydefault)
  YYDECLARELABEL(yyreduce)
  YYDECLARELABEL(yyerrlab)   /* here on detecting error */
  YYDECLARELABEL(yyerrlab1)   /* here on error raised explicitly by an action */
  YYDECLARELABEL(yyerrdefault)  /* current state does not do anything special for the error token. */
  YYDECLARELABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */
  YYDECLARELABEL(yyerrhandle)  
YYENDDECLARELABEL
/* ALLOCA SIMULATION */
/* __HAVE_NO_ALLOCA */
#ifdef __HAVE_NO_ALLOCA
int __alloca_free_ptr(char *ptr,char *ref)
{if(ptr!=ref) free(ptr);
 return 0;}

#define __ALLOCA_alloca(size) malloc(size)
#define __ALLOCA_free(ptr,ref) __alloca_free_ptr((char *)ptr,(char *)ref)

#ifdef YY_parse_LSP_NEEDED
#define __ALLOCA_return(num) \
            do { return( __ALLOCA_free(yyss,yyssa)+\
		    __ALLOCA_free(yyvs,yyvsa)+\
		    __ALLOCA_free(yyls,yylsa)+\
		   (num)); } while(0)
#else
#define __ALLOCA_return(num) \
            do { return( __ALLOCA_free(yyss,yyssa)+\
		    __ALLOCA_free(yyvs,yyvsa)+\
		   (num)); } while(0)
#endif
#else
#define __ALLOCA_return(num) do { return(num); } while(0)
#define __ALLOCA_alloca(size) alloca(size)
#define __ALLOCA_free(ptr,ref) 
#endif

/* ENDALLOCA SIMULATION */

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (YY_parse_CHAR = YYEMPTY)
#define YYEMPTY         -2
#define YYEOF           0
#define YYACCEPT        __ALLOCA_return(0)
#define YYABORT         __ALLOCA_return(1)
#define YYERROR         YYGOTO(yyerrlab1)
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL          YYGOTO(yyerrlab)
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do                                                              \
  if (YY_parse_CHAR == YYEMPTY && yylen == 1)                               \
    { YY_parse_CHAR = (token), YY_parse_LVAL = (value);                 \
      yychar1 = YYTRANSLATE (YY_parse_CHAR);                                \
      YYPOPSTACK;                                               \
      YYGOTO(yybackup);                                            \
    }                                                           \
  else                                                          \
    { YY_parse_ERROR ("syntax error: cannot back up"); YYERROR; }   \
while (0)

#define YYTERROR        1
#define YYERRCODE       256

#ifndef YY_parse_PURE
/* UNPURE */
#define YYLEX           YY_parse_LEX()
#ifndef YY_USE_CLASS
/* If nonreentrant, and not class , generate the variables here */
int     YY_parse_CHAR;                      /*  the lookahead symbol        */
YY_parse_STYPE      YY_parse_LVAL;              /*  the semantic value of the */
				/*  lookahead symbol    */
int YY_parse_NERRS;                 /*  number of parse errors so far */
#ifdef YY_parse_LSP_NEEDED
YY_parse_LTYPE YY_parse_LLOC;   /*  location data for the lookahead     */
			/*  symbol                              */
#endif
#endif


#else
/* PURE */
#ifdef YY_parse_LSP_NEEDED
#define YYLEX           YY_parse_LEX(&YY_parse_LVAL, &YY_parse_LLOC)
#else
#define YYLEX           YY_parse_LEX(&YY_parse_LVAL)
#endif
#endif
#ifndef YY_USE_CLASS
#if YY_parse_DEBUG != 0
int YY_parse_DEBUG_FLAG;                    /*  nonzero means print parse trace     */
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif
#endif



/*  YYINITDEPTH indicates the initial size of the parser's stacks       */

#ifndef YYINITDEPTH
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


#if __GNUC__ > 1                /* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)       __builtin_memcpy(TO,FROM,COUNT)
#else                           /* not GNU C or C++ */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */

#ifdef __cplusplus
static void __yy_bcopy (char *from, char *to, int count)
#else
#ifdef __STDC__
static void __yy_bcopy (char *from, char *to, int count)
#else
static void __yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
#endif
#endif
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}
#endif


int
#ifdef YY_USE_CLASS
 YY_parse_CLASS::
#endif
     YY_parse_PARSE(YY_parse_PARSE_PARAM)
#ifndef __STDC__
#ifndef __cplusplus
#ifndef YY_USE_CLASS
/* parameter definition without protypes */
YY_parse_PARSE_PARAM_DEF
#endif
#endif
#endif
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YY_parse_STYPE *yyvsp;
  int yyerrstatus;      /*  number of tokens to shift before error messages enabled */
  int yychar1=0;          /*  lookahead token as an internal (translated) token number */

  short yyssa[YYINITDEPTH];     /*  the state stack                     */
  YY_parse_STYPE yyvsa[YYINITDEPTH];        /*  the semantic value stack            */

  short *yyss = yyssa;          /*  refer to the stacks thru separate pointers */
  YY_parse_STYPE *yyvs = yyvsa;     /*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YY_parse_LSP_NEEDED
  YY_parse_LTYPE yylsa[YYINITDEPTH];        /*  the location stack                  */
  YY_parse_LTYPE *yyls = yylsa;
  YY_parse_LTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YY_parse_PURE
  int YY_parse_CHAR;
  YY_parse_STYPE YY_parse_LVAL;
  int YY_parse_NERRS;
#ifdef YY_parse_LSP_NEEDED
  YY_parse_LTYPE YY_parse_LLOC;
#endif
#endif

  YY_parse_STYPE yyval;             /*  the variable used to return         */
				/*  semantic values from the action     */
				/*  routines                            */

  int yylen;
/* start loop, in which YYGOTO may be used. */
YYBEGINGOTO

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Starting parse\n");
#endif
  yystate = 0;
  yyerrstatus = 0;
  YY_parse_NERRS = 0;
  YY_parse_CHAR = YYEMPTY;          /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YY_parse_LSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
YYLABEL(yynewstate)

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YY_parse_STYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YY_parse_LSP_NEEDED
      YY_parse_LTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YY_parse_LSP_NEEDED
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
#ifdef YY_parse_LSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  YY_parse_ERROR("parser stack overflow");
	  __ALLOCA_return(2);
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) __ALLOCA_alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      __ALLOCA_free(yyss1,yyssa);
      yyvs = (YY_parse_STYPE *) __ALLOCA_alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
      __ALLOCA_free(yyvs1,yyvsa);
#ifdef YY_parse_LSP_NEEDED
      yyls = (YY_parse_LTYPE *) __ALLOCA_alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
      __ALLOCA_free(yyls1,yylsa);
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YY_parse_LSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  YYGOTO(yybackup);
YYLABEL(yybackup)

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* YYLABEL(yyresume) */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yydefault);

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (YY_parse_CHAR == YYEMPTY)
    {
#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Reading a token: ");
#endif
      YY_parse_CHAR = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (YY_parse_CHAR <= 0)           /* This means end of input. */
    {
      yychar1 = 0;
      YY_parse_CHAR = YYEOF;                /* Don't call YYLEX any more */

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(YY_parse_CHAR);

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	{
	  fprintf (stderr, "Next token is %d (%s", YY_parse_CHAR, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, YY_parse_CHAR, YY_parse_LVAL);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    YYGOTO(yydefault);

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
	YYGOTO(yyerrlab);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrlab);

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Shifting token %d (%s), ", YY_parse_CHAR, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (YY_parse_CHAR != YYEOF)
    YY_parse_CHAR = YYEMPTY;

  *++yyvsp = YY_parse_LVAL;
#ifdef YY_parse_LSP_NEEDED
  *++yylsp = YY_parse_LLOC;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  YYGOTO(yynewstate);

/* Do the default action for the current state.  */
YYLABEL(yydefault)

  yyn = yydefact[yystate];
  if (yyn == 0)
    YYGOTO(yyerrlab);

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
YYLABEL(yyreduce)
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
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


 #line 839 "/usr/share/bison++/bison.cc"

  switch (yyn) {

case 13:
#line 49 "abst.y"
{
strcpy(QUAD[Index].op,"=");
strcpy(QUAD[Index].arg1,yyvsp[0].var);
strcpy(QUAD[Index].arg2,"");
strcpy(QUAD[Index].result,yyvsp[-2].var);
strcpy(yyval.var,QUAD[Index++].result);
;
    break;}
case 14:
#line 57 "abst.y"
{AddQuadruple("+",yyvsp[-2].var,yyvsp[0].var,yyval.var);;
    break;}
case 15:
#line 58 "abst.y"
{AddQuadruple("-",yyvsp[-2].var,yyvsp[0].var,yyval.var);;
    break;}
case 16:
#line 59 "abst.y"
{AddQuadruple("*",yyvsp[-2].var,yyvsp[0].var,yyval.var);;
    break;}
case 17:
#line 60 "abst.y"
{AddQuadruple("/",yyvsp[-2].var,yyvsp[0].var,yyval.var);;
    break;}
case 18:
#line 61 "abst.y"
{AddQuadruple("UMIN",yyvsp[0].var,"",yyval.var);;
    break;}
case 19:
#line 62 "abst.y"
{strcpy(yyval.var,yyvsp[-1].var);;
    break;}
case 22:
#line 66 "abst.y"
{
Ind=pop();
sprintf(QUAD[Ind].result,"%d",Index);
Ind=pop();
sprintf(QUAD[Ind].result,"%d",Index);
;
    break;}
case 24:
#line 74 "abst.y"
{
strcpy(QUAD[Index].op,"==");
strcpy(QUAD[Index].arg1,yyvsp[-1].var);
strcpy(QUAD[Index].arg2,"FALSE");
strcpy(QUAD[Index].result,"-1");
push(Index);
Index++;
;
    break;}
case 25:
#line 82 "abst.y"
{
strcpy(QUAD[Index].op,"GOTO");
strcpy(QUAD[Index].arg1,"");
strcpy(QUAD[Index].arg2,"");
strcpy(QUAD[Index].result,"-1");
push(Index);
Index++;
;
    break;}
case 26:
#line 90 "abst.y"
{

tInd=pop();
Ind=pop();
push(tInd);
sprintf(QUAD[Ind].result,"%d",Index);
;
    break;}
case 27:
#line 97 "abst.y"
{
Ind=pop();
sprintf(QUAD[Ind].result,"%d",Index);
;
    break;}
case 28:
#line 101 "abst.y"
{AddQuadruple(yyvsp[-1].var,yyvsp[-2].var,yyvsp[0].var,yyval.var);
StNo=Index-1;
;
    break;}
case 31:
#line 107 "abst.y"
{
Ind=pop();
sprintf(QUAD[Ind].result,"%d",StNo);
Ind=pop();
sprintf(QUAD[Ind].result,"%d",Index);
;
    break;}
case 32:
#line 114 "abst.y"
{
strcpy(QUAD[Index].op,"==");
strcpy(QUAD[Index].arg1,yyvsp[-1].var);
strcpy(QUAD[Index].arg2,"FALSE");
strcpy(QUAD[Index].result,"-1");
push(Index);
Index++;
;
    break;}
case 33:
#line 122 "abst.y"
{
strcpy(QUAD[Index].op,"GOTO");
strcpy(QUAD[Index].arg1,"");
strcpy(QUAD[Index].arg2,"");
strcpy(QUAD[Index].result,"-1");
push(Index);
Index++;
;
    break;}
}

#line 839 "/usr/share/bison++/bison.cc"
   /* the action file gets copied in in place of this dollarsign  */
  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YY_parse_LSP_NEEDED
  yylsp -= yylen;
#endif

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YY_parse_LSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = YY_parse_LLOC.first_line;
      yylsp->first_column = YY_parse_LLOC.first_column;
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

  YYGOTO(yynewstate);

YYLABEL(yyerrlab)   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++YY_parse_NERRS;

#ifdef YY_parse_ERROR_VERBOSE
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
	      YY_parse_ERROR(msg);
	      free(msg);
	    }
	  else
	    YY_parse_ERROR ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YY_parse_ERROR_VERBOSE */
	YY_parse_ERROR("parse error");
    }

  YYGOTO(yyerrlab1);
YYLABEL(yyerrlab1)   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (YY_parse_CHAR == YYEOF)
	YYABORT;

#if YY_parse_DEBUG != 0
      if (YY_parse_DEBUG_FLAG)
	fprintf(stderr, "Discarding token %d (%s).\n", YY_parse_CHAR, yytname[yychar1]);
#endif

      YY_parse_CHAR = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;              /* Each real token shifted decrements this */

  YYGOTO(yyerrhandle);

YYLABEL(yyerrdefault)  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) YYGOTO(yydefault);
#endif

YYLABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YY_parse_LSP_NEEDED
  yylsp--;
#endif

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

YYLABEL(yyerrhandle)

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yyerrdefault);

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    YYGOTO(yyerrdefault);

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	YYGOTO(yyerrpop);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrpop);

  if (yyn == YYFINAL)
    YYACCEPT;

#if YY_parse_DEBUG != 0
  if (YY_parse_DEBUG_FLAG)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = YY_parse_LVAL;
#ifdef YY_parse_LSP_NEEDED
  *++yylsp = YY_parse_LLOC;
#endif

  yystate = yyn;
  YYGOTO(yynewstate);
/* end loop, in which YYGOTO may be used. */
  YYENDGOTO
}

/* END */

 #line 1038 "/usr/share/bison++/bison.cc"
#line 131 "abst.y"

extern FILE *yyin;
int main(int argc,char *argv[])
{
FILE *fp;
int i;
if(argc>1)
{
fp=fopen(argv[1],"r");
if(!fp)
{

printf("\n File not found");
exit(0);
}
yyin=fp;
}
yyparse();
printf("\n\n\t\t ----------------------------\n\t\t Pos Operator Arg1 Arg2 Result\n\t\t --------------------");
for(i=0;i<Index;i++)
{
printf("\n\t\t %d\t %s\t %s\t %s\t %s",i,QUAD[i].op,QUAD[i].arg1,QUAD[i].arg2,QUAD[i].result);
}
printf("\n\t\t -----------------------");
printf("\n\n");
return 0;
}
void push(int data)
{
stk.top++;
if(stk.top==100)
{
printf("\n Stack overflow\n");
exit(0);
}
stk.items[stk.top]=data;
}
int pop()
{
int data;
if(stk.top==-1)
{
printf("\n Stack underflow\n");
exit(0);
}
data=stk.items[stk.top--];
return data;
}
void AddQuadruple(char op[5],char arg1[10],char arg2[10],char result[10])
{
strcpy(QUAD[Index].op,op);
strcpy(QUAD[Index].arg1,arg1);
strcpy(QUAD[Index].arg2,arg2);
sprintf(QUAD[Index].result,"t%d",tIndex++);
strcpy(result,QUAD[Index++].result);
}
yyerror()
{
printf("\n Error on line no:%d",LineNo);
}
