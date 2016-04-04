/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 15:45:24 by daugier           #+#    #+#             */
/*   Updated: 2016/01/05 15:48:00 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void*))
{
	if (root)
	{
		if (root->left)
			btree_apply_suffix(root->left, applyf);
		if (root->right)
			btree_apply_suffix(root->right, applyf);
		applyf(root->item);
	}
}
