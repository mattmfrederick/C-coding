/**
 * Matthew Olsen
 * March 27, 2019
 * COMP 232L Lab 8 Introduction to Bison
 */

#ifndef __calc_h_
#define __calc_h_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

// the following include file is generated automatically by CMake (along the scanner and the parser)
#include "calcParser.h"

enum func_type {
    NEG,
    ABS,
    EXP,
    SQRT,
    ADD,
    SUB,
    MULT,
    DIV,
    REMAINDER,
    LOG,
    POW,
    MAX,
    MIN
};

// declaring the following Bison functions limits compiler warnings
int yyparse(void);
int yylex(void);
void yyerror(char *);

// declaration of the function to calculate s-expressions
double calc(char *, double, double);

#endif
