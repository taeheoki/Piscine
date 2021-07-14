/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 01:16:14 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/09 05:16:23 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c1;
	int				index;

	index = 0;
	while (str[index])
	{
		c1 = str[index];
		if (c1 >= 32 && c1 <= 127)
			ft_putchar(c1);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[c1 / 16]);
			ft_putchar("0123456789abcdef"[c1 % 16]);
		}
		index++;
	}
}
