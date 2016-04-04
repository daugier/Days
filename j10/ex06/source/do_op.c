/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:17:41 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 12:08:03 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_do_op(int a, char b, int c)
{
	int		i;
	void	(*operate[5])(int, int);
	char	*tab;

	operate[0] = &sub;
	operate[1] = &add;
	operate[2] = &mult;
	operate[3] = &div;
	operate[4] = &mod;
	tab = "-+*/%";
	i = 0;
	while (tab[i])
	{
		if (tab[i] == b)
		{
			operate[i](a, c);
			ft_putchar('\n');
			return (1);
		}
		i++;
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}

int		main(int ac, char **av)
{
	char b;

	if (ac != 4)
		return (0);
	if (ft_strlen(av[2]) > 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	b = av[2][0];
	ft_do_op(ft_atoi(av[1]), b, ft_atoi(av[3]));
	return (0);
}
