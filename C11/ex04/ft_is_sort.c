/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:27:05 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 05:44:55 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int idx;
	int tmp;
	int up;
	int down;

	idx = 0;
	up = 0;
	down = 0;
	while (idx < (length - 1))
	{
		tmp = f(tab[idx], tab[idx + 1]);
		if (tmp < 0)
			up = 1;
		else if (tmp > 0)
			down = 1;
		if (up == 1 && down == 1)
			return (0);
		idx++;
	}
	return (1);
}
