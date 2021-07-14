/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 01:07:26 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/10 01:14:40 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int result;
	unsigned int index;

	if (nb <= 0)
		return (0);
	index = 0;
	while ((result = index * index) <= (unsigned int)nb)
	{
		if (result == (unsigned int)nb)
			return (index);
		index++;
	}
	return (0);
}
