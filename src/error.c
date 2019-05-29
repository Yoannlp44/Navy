/*
** EPITECH PROJECT, 2019
** EPITECH 2018
** File description:
** error
*/

#include "my.h"
#include "navy.h"
#include "get_next_line.h"

int my_error(char **boat, int size)
{
    int i;

    for (i = 0; boat[i]; i++);
    if (i != 3)
        return (84);
    if ((my_getnbr(boat[0]) < 2) && (my_getnbr(boat[0]) > 6))
        return (84);
    if ((boat[1][2] != '\0') || (boat[2][2] != '\0'))
        return (84);
    if ((((boat[2][0] - 'A' + 1) - (boat[1][0] - 'A')) != size)\
&& ((((boat[2][1] - '1' + 1) - (boat[1][1] - '1')) != size)))
        return (84);
    return (0);
}

int check_nb_boat(int i, int fd)
{
    if (i != 4)
        return (84);
    close(fd);
    return (0);
}

int error_bis(int i, int fd, char **tmp)
{
    if (check_nb_boat(i, fd) == 84)
        return (84);
    if (check_size(tmp) == 84)
        return (84);
    return (0);
}

int check_pos(char *path)
{
    int fd = open(path, O_RDONLY);
    char *s;
    char **boat;
    char **tmp;
    int size;
    int i = 0;

    if (fd == -1)
        return (84);
    tmp = malloc(sizeof(char *) * 5);
    while ((s = get_next_line(fd))){
        boat = my_str_to_word_array(s);
        size = my_getnbr(boat[0]);
        if (my_error(boat, size) == 84)
            return (84);
        tmp[i] = malloc(sizeof(char) * 1);
        tmp[i] = boat[0];
        i++;
        free(boat);
    }
    return (error_bis(i, fd, tmp) == 84 ? 84 : 0);
}

int check_size(char **tmp)
{
    int size2 = 0;
    int size3 = 0;
    int size4 = 0;
    int size5 = 0;

    for (int i = 0; tmp[i]; i++){
        if (tmp[i][0] == '2')
            size2++;
        if (tmp[i][0] == '3')
            size3++;
        if (tmp[i][0] == '4')
            size4++;
        if (tmp[i][0] == '5')
            size5++;
    }
    if ((size2 != 1) || (size3 != 1) || (size4 != 1) || (size5 != 1))
        return (84);
    return (0);
}