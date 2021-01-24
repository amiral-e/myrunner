/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int a = nb;

    if (nb <= 0)
        return (0);
    for (int i = 2; i < a; i++)
        a = nb / i;
    if (a * a != nb)
        return (0);
    return (a);
}
