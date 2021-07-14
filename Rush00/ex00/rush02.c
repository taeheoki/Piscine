/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 00:21:16 by taeheoki          #+#    #+#             */
/*   Updated: 2021/02/21 13:18:10 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_col(char *str_set, int col)
{
	int	i;

	i = 1;
	while (i <= col)
	{
		if (i == 1)
			ft_putchar(str_set[0]);
		else if (i < col)
			ft_putchar(str_set[1]);
		else if (i == col)
			ft_putchar(str_set[2]);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int col, int row)
{
	char	*start;
	char	*end;
	char	*mid;
	int		j;

	start = "ABA";
	mid = "B B";
	end = "CBC";
	if (row <= 0 || col <= 0)
		return ;
	j = 1;
	while (j <= row)
	{
		if (j == 1)
			print_col(start, col);
		else if (j < row)
			print_col(mid, col);
		else if (j == row)
			print_col(end, col);
		j++;
	}
}
