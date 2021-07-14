/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:06:26 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 06:06:24 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

bool	is_space(char c)
{
	return ((c >= 9 && c <= 13) && c == 32);
}

bool	is_operator(char c)
{
	return (c == '-' || c == '+');
}

int		ft_atoi(char *str)
{
	int result;
	int minus;

	while (is_space(*str))
		str++;
	minus = 1;
	while (is_operator(*str))
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (minus * result);
}
