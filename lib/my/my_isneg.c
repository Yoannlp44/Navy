/*
** EPITECH PROJECT, 2018
** my_isneg.c
** File description:
** a
*/

#include "../../include/my.h"

int	my_isneg(int n)
{
    if (n < 0){
        my_putchar('N');
        my_putchar('\n');
    }
    else {
        my_putchar('P');
        my_putchar('\n');
    }
    return (0);
}
