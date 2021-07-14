/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:10:22 by taeheoki          #+#    #+#             */
/*   Updated: 2021/02/22 20:42:45 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	combn(int *range, int n)
{
	int i;

	if (n < 0 || n > 10)
		return ;
	i = 0;
	while (++i < n)
		if (range[i - 1] >= range[i])
			return ;
	i = 0;
	while (i < n)
	{
		ft_putchar(48 + range[i]);
		i++;
	}
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int i;
	int range[n];

	i = 0;
	while (i < n)
	{
		range[i] = i;
		i++;
	}
	while (range[0] <= (10 - n))
	{
		combn(range, n);
		range[n - 1]++;
		i = n;
		while (i > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}
