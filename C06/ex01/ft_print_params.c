/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:51:49 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/10 16:04:16 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

int		main(int argc, char *argv[])
{
	int index;

	index = 1;
	while (index < argc)
	{
		ft_print_params(argv[index]);
		ft_putchar('\n');
		index++;
	}
}
