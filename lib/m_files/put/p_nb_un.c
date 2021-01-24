/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_put_nbr_un.c
*/

void my_putchar(char c);

void my_put_nbr_un(unsigned int nb)
{
    unsigned int nb_b;

    if (nb >= 10) {
        nb_b = nb % 10;
        nb = nb / 10;
        my_put_nbr_un(nb);
        my_putchar(nb_b + '0');
    } else
        my_putchar(nb + '0');
}