/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:21:04 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 06:23:37 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	idx;
	int	*arr;

	arr = (int *)malloc(length * sizeof(int));
	idx = 0;
	while (idx < length)
	{
		arr[idx] = f(tab[idx]);
		idx++;
	}
	return (arr);
}
