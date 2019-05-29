/*
** EPITECH PROJECT, 2019
** EPITECH 2018
** File description:
** main
*/

#include "my.h"
#include "navy.h"
#include "my_printf.h"

int main(int ac, char **av)
{
    s_game *game = malloc(sizeof(s_game));
    int return_value = 0;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0){
        my_putstr(USAGE);
        return (SUCCESS);
    }
    if (ac < 2 || ac > 3) {
        write(2, ERROR_MSG_ARG, 26);
        return (FAILURE);
    }
    if (arg(game, ac, av) != 0)
        return (84);
    if (ac == 2)
        return_value = player1(game);
    if (ac == 3)
        return_value = player2(my_getnbr(av[1]), game);
    return (return_value);
}
