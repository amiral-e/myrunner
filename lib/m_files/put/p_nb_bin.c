/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_put_nbr_bin.c
*/

void my_putchar(char c);

void my_put_nbr_bin(int nb)
{
    int i = 0;
    int bin[32];

    for (i = 0; nb > 0; i++, nb /= 2)
        bin[i] = nb % 2;
    for (i--; i >= 0; i--)
        my_putchar(bin[i] + '0');
}