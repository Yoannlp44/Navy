/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** a
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdlib.h>
#include <pwd.h>
#include <grp.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <getopt.h>
#include <fcntl.h>
#include <signal.h>

int sum_stdarg(int i, int nb, ...);
int disp_stdarg(int i, int nb, ...);
int summands(char **str);
char *my_evil_str(char *str);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int nb_words(char *str);
char **my_str_to_word_array(char *str);
int nb_letter(char *str);
int my_show_word_array(char *const *tab);
int check_char(char c);
int check_low(char c);
int check_num(char c);
int check_up(char c);
int my_putstr(char *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_compute_square_root(int nb);
int my_compute_power_rec(int nb, int p);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strdup(char const *src);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int	my_putnbr_base(int nb, char *base);
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

#endif /* !LEMIN_H_ */