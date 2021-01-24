/*
** EPITECH PROJECT, 2020
** my_itoa.c
** File description:
** my_itoa
*/

#include "m_files.h"
#include "m_macro.h"
#include <stdlib.h>

static char *itoalloc(int nb)
{
    char *str = NULL;
    int size = 1;

    if (nb < 0)
        size++;
    if (nb == 0)
        size = 2;
    for (; nb > 0 ; nb /= 10)
        size++;
    str = malloc(sizeof(char) * size);
    return (str);
}

char *my_itoa(int nb)
{
    int i = 0;
    int sign = nb;
    char *str = itoalloc(nb);

    if (nb == -2147483648) {
        str = my_strcpy(str, "8463847412-");
        return (my_revstr(str));
    }
    nb = ABS(nb);
    do {
        str[i++] = nb % 10 + '0';
        nb /= 10;
    } while (nb > 0);
    if (sign < 0)
        str[i++] = '-';
    str[i] = '\0';
    return (my_revstr(str));
}
