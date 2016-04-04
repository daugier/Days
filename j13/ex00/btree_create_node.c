/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 14:54:14 by daugier           #+#    #+#             */
/*   Updated: 2016/01/05 15:19:40 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *btree;

	btree = NULL;
	btree = (t_btree*)malloc(sizeof(t_btree));
	if (btree)
	{
		btree->right = NULL;
		btree->left = NULL;
		btree->item = item;
	}
	return (btree);
}
