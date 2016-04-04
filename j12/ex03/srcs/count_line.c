/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 10:07:20 by daugier           #+#    #+#             */
/*   Updated: 2016/01/11 21:51:03 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			g_line;
int			g_av;
static int	g_j;
static int	g_malloc;
static char	*g_buf;

void	more(char **av)
{
	int ret;
	int fd;

	fd = open(av[g_j], O_RDONLY);
	g_malloc = len_tail(av[g_j]);
	g_buf = (char*)malloc(sizeof(char) * (g_malloc + 1));
	ret = read(fd, g_buf, g_malloc);
	g_buf[ret] = '\0';
}

void	count_line(char **av)
{
	int		i;
	int		l;

	l = 0;
	g_j = g_av;
	while (av[g_j])
	{
		i = 0;
		if (open(av[g_j], O_RDONLY) != -1)
		{
			more(av);
			while (g_buf[i])
			{
				if (l % 16 == 0 && l)
					g_line++;
				l++;
				i++;
			}
		}
		g_j++;
	}
}
