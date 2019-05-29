/*
** EPITECH PROJECT, 2018
** flag_s.c
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int flag_s(va_list list)
{
    char *s = va_arg(list, char *);

    my_putstr(s);
    return (SUCCESS);
}