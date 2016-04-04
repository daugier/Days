/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 16:12:05 by daugier           #+#    #+#             */
/*   Updated: 2016/01/11 21:14:56 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			g_flag;
int			g_line;
char		*g_bf;
int			g_av;
int			g_av_more;
int			g_lol;
int			g_g;
static int	g_stop;
static int	g_i;

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

void	error(char *str, int i)
{
	if (g_g)
		ft_putchar('\n');
	ft_putstr("hexdump: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory");
	if (!g_g)
		ft_putchar('\n');
	if (i)
	{
		ft_putstr("hexdump: ");
		ft_putstr(str);
		ft_putstr(": Bad file descriptor\n");
	}
}

void	null(char **av)
{
	g_av_more = g_av;
	while (open(av[g_av], O_RDONLY) == -1 && av[g_av])
	{
		if (!av[g_av + 1])
		{
			g_stop = 1;
			error(av[g_av], 1);
		}
		else
			error(av[g_av], 0);
		g_av++;
	}
}

void	hexdump(char **av)
{
	int	fd;

	null(av);
	if (!g_stop)
	{
		fd = open(av[g_av], O_RDONLY);
		g_bf = (char*)malloc(sizeof(char) * (len_tail(av[g_av]) + 1));
		read(fd, g_bf, (len_tail(av[g_av]) + 1));
		while (g_i <= g_line)
		{
			print_left();
			print_middle(av);
			if (g_flag && !g_lol)
				print_right(av);
			if (g_lol)
				g_lol--;
			ft_putchar('\n');
			g_i++;
		}
		print_left();
		ft_putchar('\n');
	}
}
