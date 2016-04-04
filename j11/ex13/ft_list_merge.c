/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 21:53:59 by daugier           #+#    #+#             */
/*   Updated: 2015/12/15 21:08:40 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	list = *begin_list1;
	while (list->next)
		list = list->next;
	list->next = begin_list2;
}
