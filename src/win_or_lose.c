/*
** EPITECH PROJECT, 2019
** win or lose
** File description:
** win or lose
*/

#include "navy.h"
#include "my.h"

void display(s_game *game)
{
    my_printf("my positions:\n");
    print_map(game->map);
    my_printf("\nenemy's positions:\n");
    print_map(game->ennemy_map);
}

int win_or_not2(s_game *game)
{
    int check = 0;

    for (int i = 0; game->ennemy_map[i]; i++)
        for (int j = 0; game->ennemy_map[i][j]; j++)
            game->ennemy_map[i][j] == 'x' ? check++ : 0;
    if (check == 14){
        my_printf("\n");
        display(game);
        my_printf("\nI won\n");
        return (0);
    }
    return (1);
}

int win_or_not(s_game *game)
{
    int check = 0;

    for (int i = 0; game->map[i]; i++)
        for (int j = 0; game->map[i][j]; j++)
            game->map[i][j] == 'x' ? check++ : 0;
    if (check == 14){
        my_printf("\n");
        display(game);
        my_printf("\nEnemy won\n");
        return (0);
    }
    if (win_or_not2(game) == 0)
        return (0);
    return (1);
}
