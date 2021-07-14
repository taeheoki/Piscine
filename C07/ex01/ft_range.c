/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:14:42 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/13 09:16:24 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	index;

	if (min >= max)
		return (NULL);
	size = max - min;
	if ((arr = (int *)malloc((size + 1) * sizeof(int))) == NULL)
		return (NULL);
	index = 0;
	while (index < size)
	{
		arr[index] = min + index;
		index++;
	}
	arr[index] = '\0';
	return (arr);
}
