##
## EPITECH PROJECT, 2018
## makefile
## File description:
## a
##

AC = ar rc

RM = rm -f

CFLAGS += -Wall -Wextra

CFLAGS += -I./../../include

NAME = libmy.a

SRCS = 	my_putchar.c \
        my_put_nbr.c \
		my_putstr.c \
		my_getnbr.c \
		my_strlen.c \
		my_strcmp.c \
		my_strcat.c \
		my_compute_power_rec.c \
		my_evil_str.c \
		my_isneg.c \
		my_revstr.c \
		my_sort_int_array.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strcapitalize.c \
		my_strcpy.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strupcase.c \
		my_swap.c \
		my_strdup.c \
		my_putnbr_base.c \
		my_putnbr_base_uns.c \
		my_str_to_word_array.c \
		my_show_word_array.c \
		my_printf.c \
		flags/flag_s.c \
		flags/flag_d.c \
		flags/flag_c.c \
		flags/flag_x.c \
		flags/flag_o.c \
		flags/flag_p.c \
		flags/flag_b.c \
		flags/flag_u.c \
		flags/flag_s_maj.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
