/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 20:55:00 by daugier           #+#    #+#             */
/*   Updated: 2015/12/02 17:38:06 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len_param(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 0;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k])
		{
			k++;
			j++;
		}
		i++;
	}
	return (j);
}

char	*write_str(int argc, char **argv, char *str)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			str[k] = argv[j][i];
			k++;
			i++;
		}
		str[k] = '\n';
		j++;
		k++;
	}
	str[k - 1] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		n;
	char	*str;

	n = len_param(argc, argv);
	str = (char*)malloc(sizeof(char) * (n + argc - 1));
	if (!str)
		return (NULL);
	write_str(argc, argv, str);
	return (str);
}
