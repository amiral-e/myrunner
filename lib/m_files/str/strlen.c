/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i]; i++);
    return (i);
}
