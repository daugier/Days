/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 02:45:50 by daugier           #+#    #+#             */
/*   Updated: 2016/03/13 14:36:58 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int a;

	i = 0;
	a = nb;
	if (power == 0)
		return (1);
	while (++i < power)
		a = a * nb;
	return (a);
}
