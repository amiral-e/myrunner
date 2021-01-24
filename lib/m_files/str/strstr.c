/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** my_strstr
*/

#include <stdlib.h>

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    int lengh = 0;

    for (; to_find[lengh]; lengh++);
    lengh -= 1;
    for (int i = 0; str[i]; i++) {
        if (my_strncmp(str, to_find, lengh) == 0)
            return (str);
        str++;
    }
    return (NULL);
}