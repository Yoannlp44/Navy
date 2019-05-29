/*
** EPITECH PROJECT, 2019
** EPITECH 2018
** File description:
** parse
*/

#include "my.h"
#include "navy.h"
#include "get_next_line.h"

int arg(s_game *game, int ac, char **av)
{
    if (ac == 2) {
        if (get_map(game, av[1]) == 84){
            write(2, ERROR_BOAT_POS, 21);
            return (84);
        }
    }
    else {
        if (get_map(game, av[2]) == 84){
            write(2, ERROR_BOAT_POS, 21);
            return (84);
        }
    }
    return (0);
}

char **parse_map(char* path, char **tab)
{
    int fd = open(path, O_RDONLY);
    char *s;
    char **boat;
    pos_t pos1;
    pos_t pos2;

    while ((s = get_next_line(fd))){
        boat = my_str_to_word_array(s);
        int size = my_getnbr(boat[0]);
        pos1.x = boat[1][0] - 'A';
        pos1.y = boat[1][1] - '1';
        pos2.x = boat[2][0] - 'A';
        pos2.y = boat[2][1] - '1';
        if ((tab = set_boat(pos1, pos2, tab, size)) == NULL)
            return (NULL);
        free(boat);
    }
    return (tab);
}

char **set_boat(pos_t start, pos_t end, char **tab, int size)
{
    if (start.x == end.x){
        if ((tab = vert_boat(tab, start, end, size)) == NULL)
            return (NULL);
    }
    else if (start.y == end.y){
        if ((tab = hor_boat(tab, start, end, size)) == NULL)
            return (NULL);
    }
    else
        return (NULL);
    return (tab);
}

char **vert_boat(char **tab, pos_t start, pos_t end, int size)
{
    int x = start.x;
    int y = start.y;

    while (y != end.y + 1) {
        if (tab[y][x] == '.'){
            tab[y][x] = size + 48;
        }
        else
            return (NULL);
        y++;
    }
    return (tab);
}

char **hor_boat(char **tab, pos_t start, pos_t end, int size)
{
    int x = start.y;
    int y = start.x;

    while (y != end.x + 1) {
        if (tab[x][y] == '.'){
            tab[x][y] = size + 48;
        }
        else
            return (NULL);
        y++;
    }
    return (tab);
}
