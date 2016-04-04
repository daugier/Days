/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 22:34:02 by daugier           #+#    #+#             */
/*   Updated: 2015/10/29 22:34:05 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int ibis;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			ibis = i;
			while (str[i++] == to_find[j] && to_find[j] != 0)
				j++;
			if (to_find[j] == '\0')
				return (&str[ibis]);
			else
			{
				i = ibis;
				j = 0;
			}
		}
		i++;
	}
	return (0);
}
