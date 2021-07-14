/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 23:07:01 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/16 19:24:06 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char				*ft_strdup(char *src)
{
	int		idx;
	char	*dst;

	idx = 0;
	if ((dst = (char *)malloc(ft_strlen(src) + 1)) == NULL)
		return (0);
	while (src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = 0;
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			idx;

	if (!(arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	idx = 0;
	while (idx < ac)
	{
		arr[idx].size = ft_strlen(av[idx]);
		arr[idx].str = av[idx];
		arr[idx].copy = ft_strdup(av[idx]);
		idx++;
	}
	arr[idx].str = 0;
	return (arr);
}
