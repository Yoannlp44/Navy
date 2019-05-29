/*
** EPITECH PROJECT, 2019
** signal
** File description:
** signal
*/

#include "my.h"
#include <signal.h>
#include "get_next_line.h"
#include "navy.h"

extern int global;

void hit_or_not_sig(int sig, siginfo_t *si, void *context)
{
    (void)si;
    (void)context;
    if (sig == SIGUSR1)
        global = 1;
    if (sig == SIGUSR2)
        global = 2;
}

void hit_or_not(s_game *game, int letter, int pos)
{
    struct sigaction sig;

    sig.sa_flags = SA_SIGINFO;
    sig.sa_sigaction = hit_or_not_sig;
    sigaction(SIGUSR1, &sig, NULL);
    sigaction(SIGUSR2, &sig, NULL);
    global = 0;
    while (global == 0);
    if (global == 1) {
        my_printf("%c%d: hit\n", letter + 64, pos);
        game->ennemy_map[pos - 1][letter - 1] = 'x';
    }
    if (global == 2) {
        my_printf("%c%d: missed\n", letter + 64, pos);
        game->ennemy_map[pos - 1][letter - 1] = 'o';
    }
}

void send_pos(int letter, int pos, int pid)
{
    while (letter != 0){
        kill(pid, SIGUSR1);
        usleep(10000);
        letter--;
    }
    kill(pid, SIGUSR2);
    usleep(10000);
    while (pos != 0){
        kill(pid, SIGUSR1);
        usleep(10000);
        pos--;
    }
    kill(pid, SIGUSR2);
}

int check_arg_valid(char *str)
{
    if (my_strlen(str) != 2 || str[0] < 'A' || str[0] > 'H' \
|| str[1] < '1' || str[1] > '8')
        return (1);
    return (0);
}

int play(int pid, s_game *game)
{
    char *str = NULL;
    int letter = 0;
    int pos = 0;

    my_printf("\nattack: ");
    str = get_next_line(0);
    if (str == NULL)
        return (-1);
    while (check_arg_valid(str) != 0) {
        my_printf("wrong position\n");
        my_printf("attack: ");
        str = get_next_line(0);
        if (str == NULL)
            return (-1);
    }
    letter = str[0] - 64;
    pos = str[1] - 48;
    send_pos(letter, pos, pid);
    hit_or_not(game, letter, pos);
    global = 0;
    return (0);
}
