/*
** EPITECH PROJECT, 2018
** strcat
** File description:
** a
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i]){
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}