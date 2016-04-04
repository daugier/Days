/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 15:47:35 by daugier           #+#    #+#             */
/*   Updated: 2015/10/28 03:20:56 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * (ft_recursive_power(nb, power - 1)));
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	return (0);
}
