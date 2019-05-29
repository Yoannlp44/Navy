/*
** EPITECH PROJECT, 2018
** my_sort_array.c
** File description:
** a
*/

#include "../../include/my.h"

void my_sort_int_array(int *array, int size)
{
    int i = 0;

    while (i < size - 1){
        if (array[i + 1] < array[i]){
            my_swap(&array[i + 1], &array[i]);
            i = 0;
        }
        else
            i++;
    }
}