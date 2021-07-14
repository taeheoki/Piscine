/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:19:53 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/15 05:39:46 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

int		str_length(int size, char **strs, char *sep)
{
	int length;
	int index;

	length = 0;
	index = 0;
	while (index < size)
	{
		length += ft_strlen(strs[index]);
		index++;
		if (index != size)
			length += ft_strlen(sep);
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		index;
	char	*str;
	char	*tmp;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = 0;
		return (str);
	}
	length = str_length(size, strs, sep);
	if ((str = (char *)malloc((length + 1) * sizeof(char))) == NULL)
		return (0);
	tmp = ft_strcat(str, strs[0]);
	index = 1;
	while (index < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[index]);
		index++;
	}
	*tmp = '\0';
	return (str);
}
