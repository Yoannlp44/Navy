/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** a
*/

int my_getnbr(char const *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (str[i] == '-' || str[i] == '+'){
        if (*str == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9'){
        if (result > 214748364 || (result == 214748364 \
            && (str[i] == '9' || (str[i] == '8' && sign == 1))))
            return (0);
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result * sign);
}