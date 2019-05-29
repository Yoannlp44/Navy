/*
** EPITECH PROJECT, 2018
** navy.h
** File description:
** navy h
*/

#ifndef _NAVY_H_
#define _NAVY_H_

#define ERROR_MSG_ARG "Wrong number of argument\n"
#define ERROR_BOAT_POS "Wrong boat position\n"
#define ERROR_MSG_MEMORY "Error with a memory allocation\n"
#define USAGE "USAGE\n     ./navy [first_player_pid] navy_positions\n\
DESCRIPTION\n      first_player_pid:  only for the 2nd player.  pid of the \
first player.\nnavy_positions:  file representing the positions of the ships.\n"
#define SUCCESS (0)
#define FAILURE (84)


typedef struct s_pos {
    int x;
    int y;
} pos_t;

typedef struct t_game{
    char **map;
    char **ennemy_map;
} s_game;

int player1(s_game *game);
int player2(int pid, s_game *game);
char **set_boat(pos_t start, pos_t end, char **tab, int size);
char **vert_boat(char **tab, pos_t start, pos_t end, int size);
char **hor_boat(char **tab, pos_t start, pos_t end, int size);
char **parse_map(char* path, char **tab);
int my_error(char **boat, int size);
int check_nb_boat(int i, int fd);
int check_pos(char *path);
char **put_row(void);
void print_row(char *str);
void print_map(char **tab);
int get_map(s_game *game, char *path);
void hit_or_not(s_game *game, int letter, int pos);
void send_pos(int letter, int pos, int pid);
int check_arg_valid(char *str);
int play(int pid, s_game *game);
void send_hit_or_not(s_game *game, int letter, int pos, int pid);
void wait_ennemy_attack(s_game *game, int pid);
void wait_ennemy(void);
void display(s_game *game);
int win_or_not2(s_game *game);
int win_or_not(s_game *game);
int arg(s_game *game, int ac, char **av);

#endif