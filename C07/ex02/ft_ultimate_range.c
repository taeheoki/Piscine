/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:16:47 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/13 10:17:41 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int	size;
	int	index;

	if (min >= max)
		return (0);
	size = max - min;
	if ((*range = (int *)malloc((size + 1) * sizeof(int))) == NULL)
	{
		return (-1);
	}
	index = 0;
	arr = *range;
	while (index < size)
	{
		arr[index] = min + index;
		index++;
	}
	arr[index] = '\0';
	return (size);
}
