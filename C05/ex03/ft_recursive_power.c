/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 00:43:29 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/11 02:49:21 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_recursive(int nb, int power, int result)
{
	result *= nb;
	power--;
	if (power > 0)
		return (ft_recursive_recursive(nb, power, result));
	return (result);
}

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else if (power == 0)
		return (1);
	return (ft_recursive_recursive(nb, power, result));
}
