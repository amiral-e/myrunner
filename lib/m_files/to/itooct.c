/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_itooct.c
*/

unsigned int my_itooct(unsigned int nb)
{
    unsigned int oct = 0;

    for (int i = 1; nb != 0; nb /= 8, i *= 10)
        oct += (nb % 8) * i;
    return oct;
}