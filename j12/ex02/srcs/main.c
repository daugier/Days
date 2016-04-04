/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:55:02 by daugier           #+#    #+#             */
/*   Updated: 2016/02/24 18:08:15 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		len_tail(char *str)
{
	int		i;
	int		fd;
	char	buf;

	i = 0;
	fd = open(str, O_RDONLY);
	while (read(fd, &buf, 1))
		i++;
	return (i);
}

void	tail(char *str, int atoi)
{
	int		fd;
	char	buff;
	int		i;
	int		len;

	i = 0;
	fd = open(str, O_RDONLY);
	len = len_tail(str);
	while (read(fd, &buff, 1))
	{
		if (i >= len - atoi)
			ft_putchar(buff);
		i++;
	}
	close(fd);
}

int		main(int ac, char **av)
{
	int		i;
	int		atoi;
	int		b_n;

	atoi = ft_atoi(av[2]);
	i = 3;
	b_n = 0;
	while (av[i])
	{
		if (ac > 4)
		{
			if (b_n++)
				ft_putchar('\n');
			ft_putstr("==> ");
			ft_putstr(av[i]);
			ft_putstr(" <==\n");
		}
		tail(av[i], atoi);
		i++;
	}
	return (0);
}
