/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** a
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i + 1 < n)
        i = i + 1;
    return (s1[i] - s2[i]);
}