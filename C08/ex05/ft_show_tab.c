/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 00:50:45 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/17 23:20:25 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putstr("8");
	}
	else if (nb < 0)
	{
		ft_putstr("-");
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	idx;

	idx = 0;
	while (par[idx].str)
	{
		ft_putstr(par[idx].str);
		ft_putstr("\n");
		ft_putnbr(par[idx].size);
		ft_putstr("\n");
		ft_putstr(par[idx].copy);
		ft_putstr("\n");
		idx++;
	}
}
