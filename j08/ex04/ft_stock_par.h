/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:27:39 by daugier           #+#    #+#             */
/*   Updated: 2015/12/09 18:27:12 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STOCK_PAR_H
# define __FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

char			**ft_split_whitespaces(char *str);
void			ft_show_tab(t_stock_par *par);

#endif
