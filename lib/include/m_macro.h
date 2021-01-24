/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** m_macro.h
*/

#ifndef M_MACRO_H
#define M_MACRO_H

#include <unistd.h>

/* to */
#define CTOI(x) ((x) - '0')
#define ITOC(x) ((x) + '0')

/* comp */
#define GETBIG(x, y) ((x < y) ? y : x)
#define GETLOW(x, y) ((x < y) ? x : y)

/* calcs */
#define ABS(x) ((x < 0) ? -x : x)
#define EVAL_SUM(x, x2) (number(x) + number(x2))
#define EVAL_SUB(x, x2) (number(x) - number(x2))
#define EVAL_MUL(x, x2) (number(x) * number(x2))
#define EVAL_DIV(x, x2) (number(x) / number(x2))
#define EVAL_MOD(x, x2) (number(x) % number(x2))

/* char */
#define CHAR_IS_NUM(c) (('0' <= c && c <= '9') ? 1 : 0)
#define CHAR_IS_ALPHALO(c) ((c - 'a') <= ('z' - 'a') ? 1 : 0)
#define CHAR_IS_ALPHAUP(c) ((c - 'A') <= ('Z' - 'A') ? 1 : 0)
#define CHAR_IS_OPLO(c) ((c == '+' || c == '-') ? 1 : 0)
#define CHAR_IS_OPUP(c) ((c == '*' || c == '/' || c == '%') ? 1 : 0)
#define CHAR_IS_ALPHA(c) (CHAR_IS_ALPHALO(c) || CHAR_IS_ALPHAUP(c))
#define CHAR_IS_ALPHANUM(c) (CHAR_IS_ALPHA(c) || CHAR_IS_NUM(c))
#define CHAR_IS_OP(c) (CHAR_IS_OPLO(c) || CHAR_IS_OPUP(c))
#define CHAR_IS_PRIO(c) (CHAR_IS_OPUP(c))

/* int */
#define INT_IS_NEG(x) ((x < 0) ? 1 : 0)

#endif /* M_MACRO_H */