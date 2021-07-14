/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:48:53 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/08 16:39:38 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_lowercase(char *str)
{
	int		valid;
	int		index;
	char	c1;

	index = 0;
	valid = true;
	while (str[index] != '\0')
	{
		c1 = str[index];
		if (!(c1 >= 'a' && c1 <= 'z'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
