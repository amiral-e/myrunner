/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** my_str_isupper
*/

#include "m_macro.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!CHAR_IS_ALPHAUP(str[i]))
            return (0);
    return (1);
}
