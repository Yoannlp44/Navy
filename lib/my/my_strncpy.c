/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** a
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n){
        dest[i] = src[i];
        i = i + 1;
    }
    if (i < n)
        dest[i] = '\0';
    return (dest);
}