/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** my_str_isalpha
*/

#include "m_macro.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!CHAR_IS_ALPHA(str[i]))
            return (0);
    return (1);
}
