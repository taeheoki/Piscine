/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 02:18:44 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/08 17:25:13 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_get_hex(unsigned long long nb, int prev)
{
	char *base;

	base = "0123456789abcdef";
	if (nb < 16 && prev == 1)
		ft_putchar('0', 1);
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
	{
		ft_putchar(base[nb], 1);
	}
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	temp;
	int					i;

	temp = addr;
	i = 0;
	while (i++ < 15)
	{
		if (temp < 16)
			ft_putchar('0', 1);
		temp = temp / 16;
	}
	ft_get_hex(addr, 0);
}

void	ft_print_data(unsigned char *c1, unsigned int sendsize)
{
	unsigned int	i;

	i = 0;
	while (i < 17)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < sendsize)
		{
			ft_get_hex((unsigned long long)*(c1 + i), 1);
		}
		else if (i != 16)
			ft_putchar(' ', 2);
		i++;
	}
	i = 0;
	while (i < sendsize)
	{
		if (*(c1 + i) <= 31 || *(c1 + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c1 + i), 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*c1;
	unsigned int	index;
	unsigned int	sendsize;

	c1 = addr;
	index = 0;
	while (index * 16 < size)
	{
		if (index < size / 16)
			sendsize = 16;
		else
			sendsize = size % 16;
		ft_print_addr((unsigned long long)c1 + (index * 16));
		ft_putchar(':', 1);
		ft_print_data(c1 + (index * 16), sendsize);
		ft_putchar('\n', 1);
		index++;
	}
	return (addr);
}
