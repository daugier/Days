/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:09:55 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 16:45:27 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	test;
	int	tmp;

	test = 0;
	while (--length > 0)
	{
		tmp = f(tab[length - 1], tab[length]);
		if (tmp)
		{
			if (!test && tmp)
				test = tmp > 0 ? 1 : -1;
			if ((tmp > 0 && test == -1) || (tmp < 0 && test == 1))
				return (0);
		}
	}
	return (1);
}
