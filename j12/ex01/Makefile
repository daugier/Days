# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daugier <daugier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/19 18:26:02 by daugier           #+#    #+#              #
#    Updated: 2016/01/07 14:46:22 by daugier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

HEADER = srcs/ft.h

SRC = srcs/main.c \
	  srcs/ft_putchar.c \
	  srcs/ft_putstr.c 


OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f ft_cat
