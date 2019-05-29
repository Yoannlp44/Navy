/*
** EPITECH PROJECT, 2018
** my_str_islower
** File description:
** a
*/

#include "../../include/my.h"

int check_low(char c)
{
    if (c <= 'z' && c >= 'a')
        return (1);
    else
        return (0);
}

int my_str_islower(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0'){
        if (check_low(str[i]) == 1)
            i++;
        else
            return (0);
    }
    return (1);
}