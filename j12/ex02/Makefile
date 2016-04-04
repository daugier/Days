# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daugier <daugier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/20 11:22:52 by daugier           #+#    #+#              #
#    Updated: 2016/01/07 15:35:10 by daugier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

HEADER = srcs/ft.h

SRC = srcs/main.c \
	  srcs/ft_atoi.c \
	  srcs/ft_putchar.c \
	  srcs/ft_putstr.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f ft_tail
