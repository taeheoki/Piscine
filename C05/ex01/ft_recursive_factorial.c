/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 00:11:33 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/10 18:19:39 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_recursive(int nb, int result)
{
	result *= nb--;
	if (nb > 0)
		return (ft_recursive_recursive(nb, result));
	return (result);
}

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	result = 1;
	return (ft_recursive_recursive(nb, result));
}
