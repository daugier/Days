/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:21:07 by daugier           #+#    #+#             */
/*   Updated: 2015/11/06 21:56:07 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
		return (0);
	range[0] = (int*)malloc(sizeof(int) * (max - min));
	if (!range[0])
		return (0);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
