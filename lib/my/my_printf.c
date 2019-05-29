/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** a
*/


#include "../include/my.h"
#include "../include/my_printf.h"

void init(int (*fct[11])(va_list))
{
    fct[0] = &flag_s;
    fct[1] = &flag_d;
    fct[2] = &flag_c;
    fct[3] = &flag_d;
    fct[4] = &flag_x;
    fct[5] = &flag_x_maj;
    fct[6] = &flag_o;
    fct[7] = &flag_p;
    fct[8] = &flag_b;
    fct[9] = &flag_u;
    fct[10] = &flag_s_maj;
}

int choose_fct(va_list list, int (*fct[11])(va_list), char **str)
{
    int i = 0;

    char *flag = "sdcixXopbuS";

    while (flag[i]){
        if (**str == flag[i]){
            fct[i](list);
            return (SUCCESS);
        }
        else if (**str == '%'){
            my_putchar('%');
            return (SUCCESS);
        }
        i++;
    }
    return (SUCCESS);
}

void my_printf(char *format, ...)
{
    va_list list;
    int (*fct[11])(va_list);

    init(fct);
    va_start(list, format);
    while (*format) {
        if (format[0] == '%' && format[1] != '\0') {
            format++;
            choose_fct(list, fct, &format);
        }
        else if (*format != '%')
            my_putchar(*format);
        format++;
    }
    va_end(list);
}