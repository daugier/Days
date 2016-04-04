/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:55:02 by daugier           #+#    #+#             */
/*   Updated: 2016/01/07 14:48:41 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	cat_error(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	cat_cool(char *str)
{
	int		fd;
	char	buf;

	fd = open(str, O_RDONLY);
	while (read(fd, &buf, 1))
		ft_putchar(buf);
	close(fd);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac < 2)
		return (0);
	while (av[i])
	{
		if (open(av[i], O_RDONLY) == -1)
			cat_error(av[i]);
		else
			cat_cool(av[i]);
		i++;
	}
	return (0);
}
