/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:06:52 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/17 16:18:46 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		add(int a, int b)
{
	return (a + b);
}

int		sub(int a, int b)
{
	return (a - b);
}

int		mul(int a, int b)
{
	return (a * b);
}

int		div(int a, int b)
{
	return (a / b);
}

int		mod(int a, int b)
{
	return (a % b);
}
