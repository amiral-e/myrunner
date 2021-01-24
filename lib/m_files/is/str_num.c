/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** my_str_isnum
*/

#include "m_macro.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!CHAR_IS_NUM(str[i]))
            return (0);
    return (1);
}
