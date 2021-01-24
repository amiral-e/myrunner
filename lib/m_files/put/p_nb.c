/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my_put_nbr function
*/

int my_putchar(char c);

void my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
}
