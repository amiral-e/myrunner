/*
** EPITECH PROJECT, 2020
** my_atoi.c
** File description:
** my_atoi
*/

#include "../../include/m_macro.h"

int my_atoi(char const *str)
{
    int nb = 0;
    int neg = 1;
    int i = 0;

    for (; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            neg *= -1;
    for (; str[i] != '\0'; i++)
        nb = nb * 10 + (str[i] - '0');
    return (nb * neg);
}