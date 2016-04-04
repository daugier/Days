/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 22:44:27 by daugier           #+#    #+#             */
/*   Updated: 2015/12/19 18:17:49 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_H
# define __FT_H
# define BUF 4096

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putchar_error(char c);
void	ft_putstr(char *str);
void	ft_putstr_error(char *str);
void	ft_error(int ac, char **av);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nbr);

#endif
