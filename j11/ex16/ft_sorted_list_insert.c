/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 22:27:47 by daugier           #+#    #+#             */
/*   Updated: 2015/12/15 21:50:02 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *list;
	t_list *tmp;

	list = *begin_list;
	while (list)
	{
		if (cmp(list->data, data) <= 0)
		{
			tmp = list->next;
			list->next->next = tmp;
			list->next = ft_create_elem(data);
			list = list->next;
		}
		list = list->next;
	}
}
