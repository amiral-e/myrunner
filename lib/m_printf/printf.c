/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** main.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "m_printf.h"

int check_flag_id(char f)
{
    char *fi_tab = "scdi%";

    for (int i = 0; fi_tab[i]; i++)
        if (f == fi_tab[i])
            return (1);
    return (0);
}

void call_flag(va_list list, int f)
{
    void (*fp[128]) (va_list list);

    fp['s'] = &pf_str;
    fp['c'] = &pf_c;
    fp['d'] = &pf_di;
    fp['i'] = &pf_di;
    fp['%'] = &pf_prc;
    fp[f](list);
}

int my_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%' && check_flag_id(format[i + 1]))
            call_flag(list, format[i++ + 1]);
        else
            my_putchar(format[i]);
    }
    va_end(list);
    return (0);
}