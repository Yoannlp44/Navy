/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** a
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] <= 'Z' && str[i] >= 'A'){
            str [i] = str[i] + 32;
            i++;
        }
        else
            i++;
    }
    return (str);
}