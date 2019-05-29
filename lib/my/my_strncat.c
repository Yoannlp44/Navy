/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** a
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len = my_strlen(dest);

    while (src[i] && i < nb) {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';
    return (dest);
}