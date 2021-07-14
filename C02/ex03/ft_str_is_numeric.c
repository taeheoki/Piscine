/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:43:34 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/08 16:38:59 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_numeric(char *str)
{
	int		valid;
	int		index;
	char	c1;

	index = 0;
	valid = true;
	while (str[index] != '\0')
	{
		c1 = str[index];
		if (!(c1 >= '0' && c1 <= '9'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
