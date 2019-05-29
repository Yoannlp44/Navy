/*
** EPITECH PROJECT, 2019
** player2
** File description:
** player2
*/

#include "my.h"
#include <sys/types.h>
#include <signal.h>
#include "navy.h"

extern int global;

void get_pos(int sig, siginfo_t *si, void *context)
{
    (void)si;
    (void)context;
    if (sig == SIGUSR1)
        global++;
    if (sig == SIGUSR2)
        global = -1;
}

void send_hit_or_not(s_game *game, int letter, int pos, int pid)
{
    if (game->map[pos - 1][letter - 1] != '.' &&\
    game->map[pos - 1][letter - 1] != 'x' && \
    game->map[pos - 1][letter - 1] != 'o'){
        kill(pid, SIGUSR1);
        my_printf("%c%d: hit\n", letter + 64, pos);
        game->map[pos - 1][letter - 1] = 'x';
    }
    else {
        kill(pid, SIGUSR2);
        my_printf("%c%d: missed\n", letter + 64, pos);
        game->map[pos - 1][letter - 1] = 'o';
    }
    usleep(10000);
}

void wait_ennemy_attack(s_game *game, int pid)
{
    struct sigaction sig;
    int letter = 0;
    int pos = 0;

    sig.sa_flags = SA_SIGINFO;
    sig.sa_sigaction = get_pos;
    sigaction(SIGUSR1, &sig, NULL);
    sigaction(SIGUSR2, &sig, NULL);
    my_printf("\nwaiting for enemy's attack...\n");
    while (global != -1)
        letter = global;
    global = 0;
    while (global != -1)
        pos = global;
    send_hit_or_not(game, letter, pos, pid);
    global = 0;
}

int player2(int pid, s_game *game)
{
    my_printf("my_pid: %d\n", getpid());
    if (kill(pid, SIGUSR1) != 0)
        return (-1);
    my_printf("successfully connected\n\n");
    while (1) {
        display(game);
        wait_ennemy_attack(game, pid);
        if (win_or_not(game) != 1)
            return (1);
        usleep(10000);
        if (play(pid, game) != 0)
            return (-1);
        if (win_or_not(game) != 1)
            return (0);
        my_printf("\n");
    }
    return (0);
}