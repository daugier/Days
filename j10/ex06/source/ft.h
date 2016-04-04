/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:21:56 by daugier           #+#    #+#             */
/*   Updated: 2015/12/13 12:08:56 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_H
# define __FT_H

# define NODIV "Stop : division by zero"
# define NOMOD "Stop : modulo by zero"
# include <unistd.h>

void				ft_putchar(char c);
void				ft_putnbr(int nbr);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
int					ft_do_op(int a, char b, int c);
int					ft_atoi(char *str);
void				sub(int a, int b);
void				add(int a, int b);
void				mult(int a, int b);
void				div(int a, int b);
void				mod(int a, int b);

#endif
