/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:03:04 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/08 16:42:09 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_printable(char *str)
{
	int		valid;
	int		index;
	char	c1;

	index = 0;
	valid = true;
	while (str[index] != '\0')
	{
		c1 = str[index];
		if (!(c1 >= 32 && c1 <= 126))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
