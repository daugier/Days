/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:01:58 by daugier           #+#    #+#             */
/*   Updated: 2016/01/05 16:13:12 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void*, void*))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->right, data_ref, cmpf);
		if (root->right)
			btree_search_item(root->right, data_ref, cmpf);
		if (cmpf(data_ref, root->item) == 0)
			return (data_ref);
	}
	return (0);
}
