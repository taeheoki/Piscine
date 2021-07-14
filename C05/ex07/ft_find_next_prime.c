/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 01:32:50 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/11 02:50:12 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_prime(int nb)
{
	unsigned int index;
	unsigned int sqrt;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else
	{
		index = 0;
		while ((index * index) <= (unsigned int)nb)
			index++;
	}
	sqrt = index - 1;
	index = 2;
	while ((index <= sqrt) && (nb % index != 0))
		index++;
	return (index > sqrt);
}

int		ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (true)
	{
		if (is_prime(nb + i))
			break ;
		i++;
	}
	return (nb + i);
}
