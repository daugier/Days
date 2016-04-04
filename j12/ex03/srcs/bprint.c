/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 11:55:07 by daugier           #+#    #+#             */
/*   Updated: 2016/01/11 21:57:15 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int				g_flag;
static int		g_i;
int				g_av;
int				g_lol;
int				g_last;
int				g_line;
int				g_ret;
int				g_end;
int				g_fd;
int				g_g;
char			*g_bf;
static int		g_ri;
static int		g_li;
int				g_av_more;
static int		g_right;

void		next(char **av)
{
	if (g_end < 16 && !g_bf[g_i] && !av[g_av_more + 1])
	{
		g_last = g_end;
		if (g_flag && g_end < 9)
			ft_putchar(' ');
		while (g_end++ < 16)
			ft_putstr("   ");
	}
	if (!g_bf[g_i + 16] && av[g_av_more + 1] && g_end == 16)
	{
		if (open(av[g_av_more + 1], O_RDONLY) == -1 && av[g_av_more + 1])
		{
			while (open(av[g_av_more + 1], O_RDONLY) == -1 && av[g_av_more + 1])
			{
				g_g++;
				if (g_flag)
				{
					g_lol++;
					print_right(av);
				}
				error(av[g_av_more + 1], 0);
				g_av_more++;
			}
		}
	}
}

void		print_middle(char **av)
{
	int i;

	g_end %= 16;
	while (g_bf[g_i] && g_end < 16)
	{
		if (g_flag && g_end % 8 == 0)
			ft_putchar(' ');
		ft_putchar(' ');
		if (ft_strlen(ft_convert_base(cmp(g_bf[g_i], 0), HEXA)) == 1)
			ft_putchar('0');
		ft_putstr(ft_convert_base(cmp(g_bf[g_i], 0), HEXA));
		g_end++;
		g_i++;
		if (!g_bf[g_i] && av[g_av_more + 1])
		{
			g_i = 0;
			g_av_more++;
			i = len_tail(av[g_av_more]);
			g_fd = open(av[g_av_more], O_RDONLY);
			g_bf = (char*)malloc(sizeof(char) * (i + 1));
			read(g_fd, g_bf, i);
		}
		next(av);
	}
}

void		more_right(char **av)
{
	if (!g_bf[g_right] && av[g_av + 1])
	{
		g_av++;
		while (open(av[g_av], O_RDONLY) == -1 && av[g_av])
			g_av++;
		if (open(av[g_av], O_RDONLY) != -1 && av[g_av])
		{
			g_right = 0;
			g_fd = open(av[g_av], O_RDONLY);
			g_bf = (char*)malloc(sizeof(char) * (len_tail(av[g_av]) + 1));
			read(g_fd, g_bf, len_tail(av[g_av]));
		}
	}
}

void		print_right(char **av)
{
	ft_putstr("  ");
	ft_putchar('|');
	g_ri = 0;
	if (g_av_more > g_av)
	{
		close(g_fd);
		g_fd = open(av[g_av], O_RDONLY);
		g_bf = (char*)malloc(sizeof(char) * (len_tail(av[g_av]) + 1));
		g_bf[read(g_fd, g_bf, len_tail(av[g_av]))] = '\0';
	}
	while (g_ri < 16 && g_bf[g_right])
	{
		if (g_bf[g_right] == '\n' || g_bf[g_right] == '\t')
			ft_putchar('.');
		else
			ft_putchar(g_bf[g_right]);
		g_right++;
		g_ri++;
		more_right(av);
	}
	ft_putchar('|');
}

void		print_left(void)
{
	if (g_flag)
		ft_putchar('0');
	if (g_last % 16 == 0)
	{
		print_zero(g_li);
		ft_putstr(ft_convert_base(g_li, HEXA));
		ft_putchar('0');
	}
	else if (g_last != 16 && g_last != 0)
	{
		print_zero(g_li - 1);
		ft_putstr(ft_convert_base(g_li - 1, HEXA));
		ft_putstr(ft_convert_base(g_last, HEXA));
	}
	g_li++;
}
