/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = 0;

    for (; dest[a]; a++);
    for (; src[b]; a++, b++)
        dest[a] = src[b];
    dest[a] = '\0';
    return dest;
}
