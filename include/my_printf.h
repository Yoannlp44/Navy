/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** a
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>

#define SUCCESS (0)

void my_printf(char *format, ...);
int choose_fct(va_list list, int (*fct[3])(va_list), char **str);
void init(int (*fct[3])(va_list));
int flag_s(va_list list);
int flag_d(va_list list);
int flag_c(va_list list);
int flag_x(va_list list);
int flag_x_maj(va_list list);
int flag_o(va_list list);
int flag_p(va_list list);
int flag_b(va_list list);
int	flag_u(va_list list);
int flag_s_maj(va_list list);
int	my_putnbr_base_uns(unsigned long nb, char *base);

#endif /* !MY_PRINTF_H_ */
