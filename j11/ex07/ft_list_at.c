/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 18:44:30 by daugier           #+#    #+#             */
/*   Updated: 2015/12/14 17:54:10 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;

	list = begin_list;
	while (nbr > 0)
	{
		if (!list)
			return (NULL);
		list = list->next;
		nbr--;
	}
	return (list);
}
