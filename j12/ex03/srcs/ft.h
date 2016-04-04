/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 18:01:23 by daugier           #+#    #+#             */
/*   Updated: 2016/01/11 15:57:03 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_H
# define __FT_H
# define HEXA "0123456789abcdef"

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		len_tail(char *str);
int		ft_atoi(char *str);
void	error(char*str, int i);
int		ft_strcmp(char *s1, char *s2);
int		cmp(char s1, char s2);
int		ft_strlen(char *str);
char	*ft_convert_base(int nb, char *base_from);
void	print_zero(int i);
void	print_left(void);
void	print_middle(char **av);
void	print_right(char **av);
void	count_line(char **av);
void	hexdump(char **av);

#endif
