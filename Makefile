##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

CC	=	gcc

RM	=	rm -f

NAME	=	navy

SRCS	=	src/main.c 				\
			src/map.c 				\
			src/parse.c				\
			src/player1.c			\
			src/player2.c			\
			src/get_next_line.c		\
			src/signal.c			\
			src/win_or_lose.c		\
			src/error.c

INC	=	-Iinclude

LIBG	=	lib/my/libmy.a  \

LIB = lib/my

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	$(INC) -W -Wall -Wextra

all: $(NAME)

$(LIBG):
		make -C $(LIB)

$(NAME): $(OBJS) | $(LIBG)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIBG) -lncurses

clean:
	make clean -C $(LIB)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LIB)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
