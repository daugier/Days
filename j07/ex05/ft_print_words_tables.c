/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 16:10:39 by daugier           #+#    #+#             */
/*   Updated: 2015/11/05 21:04:49 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);
int			ct_wds(char *str);
int			ct_len_wrd(char *str);
char		**ft_split_whitespaces(char *str);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_print_words_tables(char **tab)
{
	int		j;

	j = 0;
	while (tab[j])
	{
		ft_putstr(tab[j]);
		ft_putchar('\n');
		j++;
	}
}
