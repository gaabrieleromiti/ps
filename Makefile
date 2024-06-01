# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 17:21:30 by gromiti           #+#    #+#              #
#    Updated: 2024/05/28 16:49:38 by gromiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT =libft.a

SRCS = srcs/args.c srcs/free.c srcs/main.c srcs/push.c srcs/r_rotate.c \
		srcs/rotate.c srcs/sort_till_3.c srcs/sort.c srcs/swap.c \

OBJS = $(SRCS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += --silent

RM = rm -f

INC = -I./incl -I./libft
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L ./libft -lft -o $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

all: $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re bonus .c.o
