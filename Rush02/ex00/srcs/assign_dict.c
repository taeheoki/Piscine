/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:11:52 by ghan              #+#    #+#             */
/*   Updated: 2021/03/14 18:11:53 by ghan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		skip_index(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		i++;
	while (str[i] && str[i] == ' ')
		i++;
	if (i != 0 && str[i] != ':')
		return (-1);
	else if (str[i] == ':')
		i++;
	while (str[i] && str[i] == ' ')
		i++;
	return (i);
}

int		value_length(char *str, int index)
{
	int len;

	len = 0;
	while (str[index] >= 32 && str[index] <= 126)
	{
		len++;
		index++;
	}
	if (str[index] != 0)
		return (-1);
	return (len);
}

void	value_copy(t_dict d_unit, char *str, int v_len, int j)
{
	int k;

	k = 0;
	while (k < v_len && str[j])
	{
		d_unit.value[k] = str[j];
		k++;
		j++;
	}
	d_unit.value[k] = 0;
}

int		key_length(char *str)
{
	int len;

	len = 0;
	while (str[len] >= '0' && str[len] <= '9')
		len++;
	return (len);
}

int		key_copy(t_dict d_unit, char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		d_unit.key[i] = str[i];
		i++;
	}
	d_unit.key[i] = 0;
	return (i);
}
