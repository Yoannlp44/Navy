/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** a
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    if (str[i] == '\0')
        return (0);
    while (to_find[i] != '\0') {
        if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
        i = i + 1;
    }
    return (str);
}