/*
** EPITECH PROJECT, 2018
** flag_c.c
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int flag_c(va_list list)
{
    char c = va_arg(list, int);

    my_putchar(c);
    return (SUCCESS);
}