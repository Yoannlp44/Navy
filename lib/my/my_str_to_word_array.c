/*
** EPITECH PROJECT, 2018
** str_to_word_array.c
** File description:
** a
*/

#include "../../include/my.h"

int my_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')\
        || (c >= '0' && c <= '9'))
        return (1);
    return (2);
}

int nb_words(char *str)
{
    int i = 0;
    int words = 0;

    while (str[i]) {
        while (str[i] == ':' && str[i] != '\0')
            i++;
        while (str[i] != ':' && str[i] != '\0')
            i++;
        words++;
    }
    return (words);
}

int nb_letter(char *str)
{
    int i = 0;

    while (str[i] != ':' && str[i] != '\0')
        i++;
    return (i);
}

char **my_str_to_word_array(char *str)
{
    char **tab = malloc(sizeof(*tab) * (nb_words(str) + 1));
    int i = 0;
    int j;
    int k = 0;
    while (str[i]){
        tab[k] = malloc(sizeof(char) * (nb_letter(str) + 1));
        while (str[i] == ':' && str[i])
            i++;
        j = 0;
        while (str[i] != ':' && str[i] != '\0') {
            tab[k][j] = str[i];
            i++;
            j++;
        }
        tab[k][j] = '\0';
        k++;
    }
    tab[k] = NULL;
    return (tab);
}