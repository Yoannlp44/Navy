/*
** EPITECH PROJECT, 2018
** my_str_isprintable
** File description:
** a
*/

#include "../../include/my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i]){
        if (str[i] <= 32 || str[i] == 127)
            return (0);
        i++;
    }
    return (1);
}