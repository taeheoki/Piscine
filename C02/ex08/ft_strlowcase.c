/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:33:15 by taeheoki          #+#    #+#             */
/*   Updated: 2021/02/23 19:28:44 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	c1;
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		c1 = str[index];
		if (c1 >= 'A' && c1 <= 'Z')
		{
			str[index] = c1 + 32;
		}
		index++;
	}
	return (str);
}
