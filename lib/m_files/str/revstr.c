/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** my_revstr
*/

#include <stddef.h>

char *my_revstr(char *str)
{
    int len = 0;
    char c;

    if (str == NULL)
        return (str);
    for (; str[len + 1] ; len++);
    for (int i = 0; i <= len; i++, len--) {
        c = str[len];
        str[len] = str[i];
        str[i] = c;
    }
    return (str);
}
