/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 17:56:36 by daugier           #+#    #+#             */
/*   Updated: 2016/01/11 16:22:31 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		g_av;
int		g_flag;
int		g_av_more;

int		main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	g_av = 1;
	if (ft_strcmp(av[1], "-C") == 0)
	{
		g_flag++;
		g_av++;
	}
	count_line(av);
	hexdump(av);
	return (0);
}
