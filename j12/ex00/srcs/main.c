/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:55:02 by daugier           #+#    #+#             */
/*   Updated: 2015/12/19 18:09:51 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	*str;
	char	buf[BUF + 1];

	str = "Makefile";
	if (ac > 2 || ac < 2 || ft_strcmp(av[1], str) == 0)
	{
		ft_error(ac, av);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	ret = read(fd, buf, BUF);
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
	return (0);
}
