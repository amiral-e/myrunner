/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** flags.c
*/

#include "m_printf.h"

void pf_str(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void pf_c(va_list list)
{
    my_putchar(va_arg(list, int));
}

void pf_di(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void pf_prc(va_list list)
{
    (void)list;
    my_putchar('%');
}