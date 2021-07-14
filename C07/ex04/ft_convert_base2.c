/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:46:54 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/15 05:43:44 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_base_len(char *base)
{
	int index;

	index = 0;
	while (base[index] != 0)
		index++;
	return (index);
}

bool	ft_exception(char *base)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (base[count] != '\0')
		count++;
	if (count < 2)
		return (false);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (false);
			j++;
		}
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ' || base[i] == '+'
				|| base[i] == '-')
			return (false);
		i++;
	}
	return (true);
}

int		ft_change_nbr(char *str, char *base, int base_len)
{
	int nbr;
	int i;
	int j;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (!(str[i] == base[j]))
		{
			if (base[j] == '\0')
				return (nbr);
			j++;
		}
		nbr = nbr * base_len;
		nbr = nbr + j;
		i++;
	}
	return (nbr);
}

bool	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int		nbr_size(int nbr, int base_to_len)
{
	int size;

	size = 0;
	if (nbr <= 0)
		size++;
	while (nbr)
	{
		nbr /= base_to_len;
		size++;
	}
	return (size);
}
