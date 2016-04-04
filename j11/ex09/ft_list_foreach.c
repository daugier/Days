/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 21:15:00 by daugier           #+#    #+#             */
/*   Updated: 2015/12/14 11:44:43 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	t_list *list;

	list = begin_list;
	if (list)
	{
		while (list)
		{
			f(list->data);
			list = list->next;
		}
	}
}
