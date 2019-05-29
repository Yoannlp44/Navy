/*
** EPITECH PROJECT, 2018
** my_put_nbr_base.c
** File description:
** a
*/

#include "../../include/my.h"

int	my_putnbr_base(int nb, char *base)
{
    int x;
    int res;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    x = nb % my_strlen(base);
    res = nb / my_strlen(base);
    if (res > 0){
        my_putnbr_base(res, base);
    }
    my_putchar(base[x]);
    return (0);
}