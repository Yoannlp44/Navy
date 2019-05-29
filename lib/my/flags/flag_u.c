/*
** EPITECH PROJECT, 2018
** flag_u.c
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int	flag_u(va_list list)
{
    int nb = va_arg(list, unsigned int);
    int x;

    if (nb > 9) {
        x = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(x + '0');
    }
    if (nb > 0 && nb <= 9)
        my_putchar(nb + '0');
    return (SUCCESS);
}