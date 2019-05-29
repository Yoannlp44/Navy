/*
** EPITECH PROJECT, 2018
** flag_x.c
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int flag_x(va_list list)
{
    int nb = va_arg(list, int);

    my_putnbr_base(nb, "0123456789abcdef");
    return (SUCCESS);
}

int flag_x_maj(va_list list)
{
    int nb = va_arg(list, int);

    my_putnbr_base(nb, "0123456789ABCDEF");
    return (SUCCESS);
}