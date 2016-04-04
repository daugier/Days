/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 03:21:38 by daugier           #+#    #+#             */
/*   Updated: 2015/11/24 12:16:43 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *str;

	i = 0;
	if (min >= max)
		return (NULL);
	str = (int *)malloc(sizeof(int) * (max - min));
	if (!str)
		return (NULL);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	str[i] = 'NULL';
	return (str);
}
