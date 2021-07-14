/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:25:10 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 05:41:30 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		ft_size(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
		size++;
	return (size);
}

void	ft_sort_string_tab(char **tab)
{
	int		idx;
	int		jdx;
	int		size;
	char	*tmp;

	size = ft_size(tab);
	idx = 1;
	while (idx++ < size)
	{
		jdx = 0;
		while (++jdx < size)
		{
			if (ft_strcmp(tab[jdx - 1], tab[jdx]) > 0)
			{
				tmp = tab[jdx - 1];
				tab[jdx - 1] = tab[jdx];
				tab[jdx] = tmp;
			}
		}
	}
}
