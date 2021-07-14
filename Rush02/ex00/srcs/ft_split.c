/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:53:32 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/13 21:58:03 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		is_sep(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int		ft_word_count(char *str)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_sep(*str))
		{
			++cnt;
			while (*str && !is_sep(*str))
				++str;
		}
		++str;
	}
	return (cnt);
}

char	*ft_strndup(char *str, int size)
{
	int		idx;
	char	*arr;

	if (!(arr = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	idx = 0;
	while (idx < size)
	{
		arr[idx] = str[idx];
		idx++;
	}
	arr[size] = 0;
	return (arr);
}

char	**ft_split(char *str)
{
	int		word_count;
	int		idx;
	char	*word_start;
	char	**arrs;

	word_count = ft_word_count(str);
	if (!(arrs = (char **)malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	idx = 0;
	while (*str)
	{
		word_start = str;
		if (!is_sep(*str))
		{
			while (!is_sep(*str) && *str)
				str++;
			arrs[idx++] = ft_strndup(word_start, str - word_start);
		}
		str++;
	}
	arrs[idx] = 0;
	return (arrs);
}
