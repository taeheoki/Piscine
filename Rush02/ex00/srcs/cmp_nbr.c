/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:46:05 by ghan              #+#    #+#             */
/*   Updated: 2021/03/14 22:19:51 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	g_flag;
int	g_len;

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int		ft_strlen(char *arg)
{
	int len;

	len = 0;
	while (arg[len])
		len++;
	return (len);
}

int		write_value(char *str, t_dict *d_arr, int d_size, int arg_ind)
{
	int	i;

	i = 0;
	while (i < d_size - 1)
	{
		if (!ft_strcmp(str, d_arr[i].key))
		{
			write(1, d_arr[i].value, d_arr[i].v_len);
			if (arg_ind != g_len - 1)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			return (1);
		}
		i++;
	}
	return (0);
}

void	cmp_combn_nbr(char *arg, t_dict *d_arr, int d_size)
{
	int	i;

	i = 0;
	while (i < g_len)
	{
		if (arg[i] == '0' || arg[i] == ' ')
		{
			i++;
			continue ;
		}
		if (arg[i] >= '1' && (g_len - i) % 3 != 2)
			change_digit(arg, d_arr, d_size, i);
		if ((g_len - i) % 3 == 1 && i < g_len - 1)
			over_hundred(d_arr, d_size, i);
		else if ((g_len - i) % 3 == 2)
			two_digits(arg, d_arr, d_size, i);
		else if ((g_len - i) % 3 == 0)
			three_digits(d_arr, d_size, i);
		i++;
		i = cond_check(i, arg);
	}
}

void	cmp_nbr(char *arg, t_dict *d_arr, int d_size)
{
	int		i;

	i = 0;
	g_len = ft_strlen(arg);
	while (arg[i])
	{
		while (arg[i] == 32)
			i++;
		if (arg[i] >= '0' && arg[i] <= '9')
			break ;
		else
		{
			write(1, "Error\n", 6);
			return ;
		}
	}
	while(arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
		{
			write(1, "Error\n", 6);
			return ;
		}
		i++;
	}
	cmp_combn_nbr(arg, d_arr, d_size);
}
