/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:54:48 by daugier           #+#    #+#             */
/*   Updated: 2015/12/19 18:16:47 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_error(int ac, char **av)
{
	char *str;

	str = "Makefile";
	if (ac > 2)
	{
		ft_putstr_error("Too many arguments.");
		ft_putchar_error('\n');
	}
	else if (ac < 2)
	{
		ft_putstr_error("File name missing.");
		ft_putchar_error('\n');
	}
	else if (ft_strcmp(av[1], str) == 0)
	{
		ft_putstr_error("*contenu du Makefile*");
		ft_putchar_error('\n');
	}
}
