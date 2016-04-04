/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 22:07:40 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 16:30:37 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = NULL;
	list = (t_list *)malloc(sizeof(t_list));
	if (list)
	{
		list->next = NULL;
		list->data = data;
		return (list);
	}
	return (list);
}
