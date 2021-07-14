/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 01:53:27 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/10 02:56:15 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		abs(int n)
{
	return (n >= 0 ? n : -n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_queens_recursive(int y, int x, int *vx, int *vy)
{
	int	i;
	int count;

	vy[y] = y;
	vx[y] = x;
	i = -1;
	while (++i < y)
		if (y == vy[i] || x == vx[i] || abs(x - vx[i]) == abs(y - vy[i]))
			return (0);
	if (y == 9)
	{
		i = -1;
		while (++i < 10)
			ft_putchar(vx[i] + '0');
		ft_putchar('\n');
		return (1);
	}
	i = -1;
	count = 0;
	while (++i < 10)
		count += ft_queens_recursive(y + 1, i, vx, vy);
	return (count);
}

int		ft_ten_queens_puzzle(void)
{
	int	i;
	int count;
	int vx[10];
	int vy[10];

	i = 0;
	while (i < 10)
	{
		vx[i] = 0;
		vy[i] = 0;
		i++;
	}
	i = 0;
	count = 0;
	while (i <= 9)
	{
		count += ft_queens_recursive(0, i, vx, vy);
		i++;
	}
	return (count);
}
