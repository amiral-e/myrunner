/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    for (; dest[a]; a++);
    for (; b < nb; a++, b++)
        dest[a] = src[b];
    dest[a] = '\0';
    return dest;
}
