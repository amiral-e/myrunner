/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (1);
    for (int i = 2; i < nb; i++)
        if ((nb % i) == 0)
            return (1);
    return (0);
}
