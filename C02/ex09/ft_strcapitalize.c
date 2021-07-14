/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:33:15 by taeheoki          #+#    #+#             */
/*   Updated: 2021/02/24 16:27:41 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_alpha(char c1)
{
	bool is_alpha;

	if ((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z'))
		is_alpha = true;
	else
		is_alpha = false;
	return (is_alpha);
}

bool	ft_is_num(char c1)
{
	bool is_num;

	if (c1 >= '0' && c1 <= '9')
		is_num = true;
	else
		is_num = false;
	return (is_num);
}

char	*ft_downsizing(char *str)
{
	char	c1;
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		c1 = str[index];
		if (c1 >= 'A' && c1 <= 'Z')
			str[index] = c1 + 32;
		index++;
	}
	return (str);
}

char	*ft_upsizing(char *str)
{
	char	c1;
	char	c2;
	int		index;
	bool	is_alpha;
	bool	is_num;

	index = 0;
	while (str[index] != '\0')
	{
		c1 = str[index];
		c2 = str[index + 1];
		if (c2 == '\0')
			break ;
		is_alpha = ft_is_alpha(c1);
		is_num = ft_is_num(c1);
		if (!(is_alpha || is_num))
		{
			if (c2 >= 'a' && c2 <= 'z')
			{
				str[index + 1] = c2 - 32;
			}
		}
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_downsizing(str);
	ft_upsizing(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}
