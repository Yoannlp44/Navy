/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** a
*/

#include "../../include/my.h"

int	my_put_nbr(int nb)
{
    int x;

    if (nb == -2147483648) {
        my_put_nbr(-214748364);
        my_putchar('8');
    } else if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        x = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(x + '0');
    }
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + '0');
    return (0);
}