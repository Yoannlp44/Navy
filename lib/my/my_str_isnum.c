/*
** EPITECH PROJECT, 2018
** my_str_isnum.c
** File description:
** a
*/

#include "../../include/my.h"

int check_num(char c)
{
    if (c <= 57 && c >= 48)
        return (1);
    else
        return (0);
}

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] != '\0'){
        if (check_num(str[i]) == 1)
            i++;
        else
            return (0);
    }
    return (1);
}