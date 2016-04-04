/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 19:01:47 by daugier           #+#    #+#             */
/*   Updated: 2015/12/14 15:17:08 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *next;
	t_list *newlist;

	newlist = NULL;
	list = *begin_list;
	while (list)
	{
		next = list->next;
		list->next = newlist;
		newlist = list;
		list = next;
	}
	*begin_list = newlist;
}
