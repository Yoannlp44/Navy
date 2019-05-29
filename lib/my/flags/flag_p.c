/*
** EPITECH PROJECT, 2018
** flag_p.c
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int flag_p(va_list list)
{
    unsigned long nb = (unsigned long)va_arg(list, char *);

    my_putstr("0x");
    my_putnbr_base_uns(nb, "0123456789abcdef");
    return (SUCCESS);
}