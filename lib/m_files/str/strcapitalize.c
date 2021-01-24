/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    for (i = i + 1; str[i]; i++) {
        if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
        (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
        (str[i - 1] >= '0' && str[i - 1] <= '9')) &&
        (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32;
        if (str[i] >= 'A' && str[i] <= 'Z'
            && ((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
            (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
            (str[i - 1] >= '0' && str[i - 1] <= '9')))
            str[i] += 32;
    }
    return (str);
}
