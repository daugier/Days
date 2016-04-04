/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 21:39:03 by daugier           #+#    #+#             */
/*   Updated: 2015/12/16 16:05:36 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp2;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	tmp2 = *begin_list;
	while (tmp2 && tmp2->next)
	{
		if (cmp(tmp2->next->data, data_ref) == 0)
		{
			tmp = tmp2->next;
			tmp2->next = tmp->next;
			free(tmp);
		}
		if (tmp2->next)
			tmp2 = tmp2->next;
	}
}
