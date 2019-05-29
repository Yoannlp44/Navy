/*
** EPITECH PROJECT, 2018
** flag_d.c
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int flag_d(va_list list)
{
    int nb = va_arg(list, int);

    my_put_nbr(nb);
    return (SUCCESS);
}