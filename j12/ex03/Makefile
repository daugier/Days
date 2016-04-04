# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daugier <daugier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/20 17:52:55 by daugier           #+#    #+#              #
#    Updated: 2016/02/17 18:56:59 by daugier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

HEADER = srcs/ft.h

SRC = srcs/main.c \
	  srcs/bprint.c \
	  srcs/count_line.c \
	  srcs/ft_convert_base.c \
	  srcs/ft_strlen.c \
	  srcs/hexdump.c \
	  srcs/print_zero.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_putnbr.c 

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f ft_hexdump

re : fclean
	make
