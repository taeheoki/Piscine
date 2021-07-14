/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:15:30 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/17 18:39:45 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_printf(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != 0 && s2[index] != 0)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_params(int size, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_params(argc - 1, argv);
	i = 1;
	while (i < argc)
	{
		ft_printf(argv[i]);
		i++;
	}
	return (0);
}
