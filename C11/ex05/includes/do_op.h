/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:05:49 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 06:32:45 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <stdbool.h>
# include <unistd.h>

# define DIV_ERR "Stop : division by zero\n"
# define MOD_ERR "Stop : modulo by zero\n"

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
bool	is_space(char c);
bool	is_operator(char c);

#endif
