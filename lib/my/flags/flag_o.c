/*
** EPITECH PROJECT, 2018
** flag_o.c
** File description:
** flag_o
*/

#include "my.h"
#include "my_printf.h"

int flag_o(va_list list)
{
    int nb = va_arg(list, int);

    my_putnbr_base(nb, "01234567");
    return (SUCCESS);
}