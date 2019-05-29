/*
** EPITECH PROJECT, 2018
** my_evil_str.c
** File description:
** a
*/

#include "../../include/my.h"

char *my_evil_str(char *str)
{
    int i = 0;
    char tmp;
    int len = my_strlen(str) - 1;

    while (i < len){
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
        i++;
    }
    return (str);
}