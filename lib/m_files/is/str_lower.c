/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** my_str_islower
*/

#include "m_macro.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!CHAR_IS_ALPHALO(str[i]))
            return (0);
    return (1);
}
