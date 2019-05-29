/*
** EPITECH PROJECT, 2018
** putnbrubase
** File description:
** a
*/

#include "../../include/my.h"

int my_putnbr_base_uns(unsigned long nb, char *base)
{
    int x;
    int res;

    x = nb % my_strlen(base);
    res = nb / my_strlen(base);
    if (res > 0){
        my_putnbr_base_uns(res, base);
    }
    my_putchar(base[x]);
    return (0);
}