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

#include <stdlib.h>
#include <stdbool.h>

bool	is_in_charset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (true);
		set++;
	}
	return (false);
}

int		ft_word_count(char *str, char *charset)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			++cnt;
			while (*str && !is_in_charset(*str, charset))
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

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	int		idx;
	char	*word_start;
	char	**arr;

	word_count = ft_word_count(str, charset);
	if (!(arr = (char **)malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	idx = 0;
	while (*str)
	{
		word_start = str;
		if (!is_in_charset(*str, charset))
		{
			while (!is_in_charset(*str, charset) && *str)
				str++;
			arr[idx++] = ft_strndup(word_start, str - word_start);
		}
		str++;
	}
	arr[idx] = 0;
	return (arr);
}
