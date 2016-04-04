/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:34:34 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 16:35:24 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*list2;

	i = 0;
	list = NULL;
	while (i < ac)
	{
		list2 = ft_create_elem(av[i]);
		list2->next = list;
		list = list2;
		i++;
	}
	return (list);
}
