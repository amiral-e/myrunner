/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; n > i && s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'); i++);
    if (s1[i] - s2[i] == 0)
        return 0;
    return (s1[i] - s2[i]) > 0 ? 1 : -1;
}
