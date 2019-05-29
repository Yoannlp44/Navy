/*
** EPITECH PROJECT, 2018
** my_str_isupper
** File description:
** a
*/

#include "../../include/my.h"

int check_up(char c)
{
    if (c <= 'Z' && c >= 'A')
        return (1);
    else
        return (0);
}

int my_str_isupper(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0'){
        if (check_up(str[i]) == 1)
            i++;
        else
            return (0);
    }
    return (1);
}