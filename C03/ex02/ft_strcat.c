/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:23:28 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/09 05:53:49 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		start;
	int		index;

	start = 0;
	while (dest[start] != '\0')
	{
		start++;
	}
	index = 0;
	while (src[index] != '\0')
	{
		dest[start++] = src[index];
		index++;
	}
	dest[start] = '\0';
	return (dest);
}
