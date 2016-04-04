/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 16:36:30 by daugier           #+#    #+#             */
/*   Updated: 2015/12/15 21:47:49 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *tmp;

	if (*begin_list)
	{
		list = *begin_list;
		while (list)
		{
			tmp = list->next;
			free(list);
			list = tmp;
		}
		*begin_list = NULL;
	}
}
