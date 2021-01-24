/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** my_strcmp
*/

char *my_strdup(char const *src);

char *my_strlowcase(char *str);

int my_strcmp(char *s1, char *s2)
{
    char *str1 = my_strlowcase(my_strdup(s1));
    char *str2 = my_strlowcase(my_strdup(s2));
    int i = 0;

    for (; (str1[i] != '\0' && str2[i] != '\0') && str1[i] == str2[i]; i++);
    return (str1[i] - str2[i]);
}
