# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daugier <daugier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/05 12:18:15 by daugier           #+#    #+#              #
#    Updated: 2015/12/12 22:26:19 by daugier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

HEADER = source/ft.h

SRC = source/do_op.c \
	  source/ft_atoi.c \
	  source/ft_putchar.c \
	  source/ft_putnbr.c \
	  source/operator.c \
	  source/ft_strlen.c \
	  source/ft_putstr.c

all : $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean : 
	rm -f do-op
