/*
** EPITECH PROJECT, 2020
** my_str_is_numop.c
** File description:
** my_str_is_numop
*/

#include "m_macro.h"

int my_str_isnumop(char *str)
{
    int i = ((str[0] == '-') ? 1 : 0);

    for (; str[i]; i++)
        if (!CHAR_IS_NUM(str[i]))
            return (0);
    return (1);
}