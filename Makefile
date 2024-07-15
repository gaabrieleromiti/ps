# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromiti <gromiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 17:21:30 by gromiti           #+#    #+#              #
#    Updated: 2024/07/15 18:16:27 by gromiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

LIBFT = libft.a

PKG = srcs/push_swap/apply_moves.c srcs/push_swap/args.c \
		srcs/push_swap/cheapest.c srcs/push_swap/free.c \
		srcs/push_swap/get_moves.c srcs/push_swap/print_push.c \
		srcs/push_swap/print_r_rotate.c srcs/push_swap/print_rotate.c \
		srcs/push_swap/print_swap.c srcs/push_swap/push.c \
		srcs/push_swap/r_rotate.c srcs/push_swap/rotate.c \
		srcs/push_swap/sort_till_3.c srcs/push_swap/sort.c \
		srcs/push_swap/swap.c \

SRCS = srcs/push_swap/main.c $(PKG)

BONUS_SRCS = srcs/checker/checker.c srcs/checker/checker_utils.c $(PKG)

OBJS = $(SRCS:%.c=%.o)
BONUS_OBJ = $(BONUS_SRCS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += --silent

RM = rm -f

INC = -I./incl -I./libft
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L ./libft -lft -o $(NAME)

$(BONUS): $(BONUS_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(BONUS_OBJ) -L ./libft -lft -o $(BONUS)

$(LIBFT):
	$(MAKE) -C ./libft

all: $(NAME) $(BONUS)

bonus: $(BONUS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJ)
	$(MAKE) clean -C ./libft

fclean: clean
	$(RM) $(NAME) $(BONUS)
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re bonus .c.o
