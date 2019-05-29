/*
** EPITECH PROJECT, 2018
** gnl
** File description:
** gnl
*/

#include "get_next_line.h"
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *my_realloc(char *str, int size)
{
    char *tmp = NULL;
    int i = 0;

    while (str[i])
        i++;
    tmp = malloc(sizeof(char) * (size + i));
    for (i = 0; str[i]; i++)
        tmp[i] = str[i];
    tmp[i] = '\0';
    return (tmp);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i])
        i++;
    while (j < nb && src[j] != '\0'){
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int check_end(char *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] == '\n')
            return (i);
        i++;
    }
    return (-1);
}

int check_start(char **start, char **line)
{
    int size = 0;

    (*line)[0] = '\0';
    if ((size = check_end(*start)) != -1){
        (*line) = my_realloc(*line, size + 1);
        (*line) = my_strncat(*line, *start, size);
        (*start) += size + 1;
        return (1);
    }
    (*line) = my_realloc(*line, READ_SIZE + 1);
    (*line) = my_strncat(*line , *start, READ_SIZE);
    return (0);
}

char *get_next_line(int fd)
{
    static char buff[READ_SIZE];
    static char *start = buff;
    char *line = NULL;
    int size = 0;

    if ((line = malloc(sizeof(char) * (2))) == NULL || fd < 0)
        return (NULL);
    if (check_start(&start, &line) != 0)
        return (line);
    while (READ_SIZE > 0 && (size = read(fd, buff, READ_SIZE))){
        buff[size] = '\0', start = buff;
        if ((size = check_end(start)) != -1) {
            line = my_realloc(line, size + 1);
            line = my_strncat(line, start, size);
            start += size + 1;
            return (line);
        }
        line = my_realloc(line, READ_SIZE + 1);
        line = my_strncat(line, start, READ_SIZE);
    }
    return (NULL);
}