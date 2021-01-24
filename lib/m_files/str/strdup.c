/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i;
    char *dest = NULL;

    dest = malloc(sizeof(char) * my_strlen(src) + 1);
    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
