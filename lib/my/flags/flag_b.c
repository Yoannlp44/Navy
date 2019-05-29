/*
** EPITECH PROJECT, 2018
** flag_b.c
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int flag_b(va_list list)
{
    int nb = va_arg(list, int);

    my_putnbr_base(nb, "01");
    return (SUCCESS);
}