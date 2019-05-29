/*
** EPITECH PROJECT, 2018
** my_strcapitalize.c
** File description:
** a
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase(str);
    while (str[i] != '\0'){
        if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
        if ((str[i] == '-' || str[i] == '+')\
            && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            str[i + 1] = str[i + 1] - 32;
        if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] = str[i + 1] - 32;
        i++;
    }
    return (str);
}