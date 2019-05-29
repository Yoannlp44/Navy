/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** a
*/

void my_swap(int *a, int *b)
{
    int tmp = 0;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
