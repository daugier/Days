/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 21:07:23 by daugier           #+#    #+#             */
/*   Updated: 2015/12/30 18:25:01 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	str1[ft_strlen(str)];

	i = 0;
	j = 0;
	while (str[j])
	{
		str1[j] = str[j];
		j++;
	}
	j--;
	while (j >= 0)
	{
		str[i] = str1[j];
		i++;
		j--;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_convert_base(int nb, char *base_to)
{
	int		i;
	int		j;
	int		n;
	int		m;
	char	*str;

	j = ft_strlen(base_to);
	n = 1;
	m = 0;
	i = nb;
	while ((i = i / j) > 0)
		n++;
	str = (char*)malloc(sizeof(char) * (n + 1));
	if (nb == 0)
	{
		str[m++] = '0';
		str[m] = '\0';
		return (str);
	}
	n = nb * j;
	while ((n = n / j) > 0)
		str[m++] = base_to[n % j];
	str[m] = '\0';
	ft_strrev(str);
	return (str);
}
