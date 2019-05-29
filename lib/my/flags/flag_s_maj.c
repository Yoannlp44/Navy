/*
** EPITECH PROJECT, 2018
** flag_s_maj;
** File description:
** a
*/

#include "my.h"
#include "my_printf.h"

int octal(char c)
{
    if (c < 8){
        my_putstr("00");
        my_putchar(c);
    }
    if (c >= 8 && c < 32){
        my_putchar('0');
        my_putchar(c);
    }
    return (SUCCESS);
}

int flag_s_maj(va_list list)
{
    int j = 0;
    char *str = va_arg(list, char *);

    while (str[j]){
        if (str[j] < 32 || str[j] >= 127){
            my_putchar('\\');
            octal(str[j]);
            my_putnbr_base(str[j], "01234567");
        }
        else
            my_putchar(str[j]);
        j++;
    }
    return (SUCCESS);
}