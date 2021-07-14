/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:49:08 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/08 16:38:06 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_alpha(char *str)
{
	int		valid;
	int		index;
	char	c1;

	index = 0;
	valid = true;
	while (str[index] != '\0')
	{
		c1 = str[index];
		if (!((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z')))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
