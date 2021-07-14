/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_nbr2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:36:20 by ghan              #+#    #+#             */
/*   Updated: 2021/03/14 22:19:03 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

extern int	g_flag;
extern int	g_len;

void	change_digit(char *arg, t_dict *d_arr, int d_size, int i)
{
	char	*sect;

	sect = (char*)malloc(2);
	sect[0] = arg[i];
	sect[1] = 0;
	if (!((g_len - i + 1) % 3 == 2 && arg[i - 1] == '1') && !g_flag)
		write_value(sect, d_arr, d_size, i);
	free(sect);
	g_flag = 0;
}

void	over_hundred(t_dict *d_arr, int d_size, int i)
{
	char	*sect;
	int		j;

	sect = (char*)malloc(g_len - i + 1);
	sect[0] = '1';
	j = 0;
	while (++j < g_len - i)
		sect[j] = '0';
	sect[j] = 0;
	write_value(sect, d_arr, d_size, i);
	free(sect);
}

void	two_digits(char *arg, t_dict *d_arr, int d_size, int i)
{
	char	*sect;

	sect = (char*)malloc(3);
	sect[0] = arg[i];
	if (sect[0] == '1')
		sect[1] = arg[i + 1];
	else
		sect[1] = '0';
	sect[2] = 0;
	write_value(sect, d_arr, d_size, i);
	free(sect);
}

void	three_digits(t_dict *d_arr, int d_size, int i)
{
	char	*sect;

	sect = (char*)malloc(4);
	sect[0] = '1';
	sect[1] = '0';
	sect[2] = '0';
	sect[3] = 0;
	write_value(sect, d_arr, d_size, i);
	free(sect);
}

int		cond_check(int i, char *arg)
{
	int z_cnt;
	int k;

	k = i;
	z_cnt = 0;
	while (k < g_len)
	{
		if (arg[k] == '0')
			z_cnt++;
		else
			z_cnt = 0;
		if (arg[k] != '0' || (g_len - k) % 3 == 1)
		{
			i = k;
			if (arg[k] == '0' && z_cnt != 3 && arg[k + 1] != 0)
			{
				arg[k] = '1';
				g_flag = 1;
			}
			break ;
		}
		k++;
	}
	return (i);
}
