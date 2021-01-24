/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** m_printf.h
*/

#ifndef M_PRINTF_H
#define M_PRINTF_H

#include "m_files.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdarg.h>

void pf_str(va_list list);
void pf_c(va_list list);
void pf_di(va_list list);
void pf_prc(va_list list);

#endif /* M_PRINTF_H */