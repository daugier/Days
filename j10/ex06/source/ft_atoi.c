/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:44:28 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 12:09:15 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	negative;

	i = 0;
	nbr = 0;
	negative = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		nbr = -nbr;
	return (nbr);
}
