/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 20:00:58 by taeheoki          #+#    #+#             */
/*   Updated: 2021/02/21 14:26:46 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char i, char j, char k, bool last)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;
	bool last;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				last = !(i == '7' && j == '8' && k == '9');
				ft_write_comb(i, j, k, last);
				k++;
			}
			j++;
		}
		i++;
	}
}
