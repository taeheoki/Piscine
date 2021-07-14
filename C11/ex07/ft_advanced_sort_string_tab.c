/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 05:42:22 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 06:36:37 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_size(char **tab)
{
	int size;

	size = 0;
	while (tab[size])
		size++;
	return (size);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[jdx - 1], tab[jdx]) > 0)
			{
				tmp = tab[jdx - 1];
				tab[jdx - 1] = tab[jdx];
				tab[jdx] = tmp;
			}
		}
	}
}
