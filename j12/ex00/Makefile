# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daugier <daugier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 22:38:45 by daugier           #+#    #+#              #
#    Updated: 2015/12/19 18:18:19 by daugier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

HEADER = srcs/ft.h

SRC = srcs/main.c \
	  srcs/ft_putstr.c \
	  srcs/ft_putchar.c \
	  srcs/ft_error.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_putnbr.c \
	  srcs/ft_putstr_error.c \
	  srcs/ft_putchar_error.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f ft_display_file
