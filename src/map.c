/*
** EPITECH PROJECT, 2019
** EPITECH 2018
** File description:
** map
*/

#include "my.h"
#include "navy.h"

char **put_row(void)
{
    char **tab;
    int i = 0;

    tab = malloc(sizeof(char*) * 9);
    if (tab == NULL)
        return (NULL);
    while (i != 8) {
        tab[i] = my_strdup("........");
        i++;
    }
    tab[i] = NULL;
    return (tab);
}

void print_row(char *str)
{
    int i = 0;

    while (str[i]) {
        if (i != 0)
            my_putchar(' ');
        my_putchar(str[i]);
        i++;
    }
}

void print_map(char **tab)
{
    int row = 0;
    my_putstr(" |A B C D E F G H\n");
    my_putstr("-+---------------\n");

    while (row != 8){
        my_printf("%i|", row + 1);
        print_row(tab[row]);
        my_putchar('\n');
        row++;
    }
}

int get_map(s_game *game, char *path)
{
    game->map = put_row();
    game->ennemy_map = put_row();
    if (check_pos(path) == 84)
        return (84);
    if ((game->map = parse_map(path, game->map)) == NULL)
        return (84);
    return (0);
}
