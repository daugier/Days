/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 16:26:06 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 12:12:12 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	add(int a, int b)
{
	ft_putnbr(a + b);
}

void	div(int a, int b)
{
	if (b == 0)
		ft_putstr(NODIV);
	else
		ft_putnbr(a / b);
}

void	mod(int a, int b)
{
	if (b == 0)
		ft_putstr(NOMOD);
	else
		ft_putnbr(a % b);
}

void	mult(int a, int b)
{
	ft_putnbr(a * b);
}
