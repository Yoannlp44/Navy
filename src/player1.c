/*
** EPITECH PROJECT, 2019
** player1
** File description:
** player1
*/

#include "my.h"
#include <signal.h>
#include "get_next_line.h"
#include "navy.h"

int global = 0;

void count_sig(int sig, siginfo_t *si, void *context)
{
    (void)sig;
    (void)context;
    global = si->si_pid;
}

void wait_ennemy(void)
{
    struct sigaction sig;

    sig.sa_flags = SA_SIGINFO;
    sig.sa_sigaction = count_sig;
    sigaction(10, &sig, NULL);
    pause();
}

int player1(s_game *game)
{
    int ennemy_pid = 0;

    my_printf("my_pid: %d\n", getpid());
    my_printf("waiting for enemy connection...\n");
    wait_ennemy();
    my_printf("\nenemy connected\n\n");
    ennemy_pid = global;
    while (1) {
        display(game);
        global = 0;
        usleep(10000);
        if (play(ennemy_pid, game) != 0)
            return (-1);
        if (win_or_not(game) != 1)
            return (0);
        wait_ennemy_attack(game, ennemy_pid);
        if (win_or_not(game) != 1)
            return (1);
        my_printf("\n");
    }
    return (0);
}