/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 01:14:22 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/10 12:38:22 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_exception_chk(char *base, int i)
{
	return (base[i] == '+' || (base[i] >= 9 && base[i] <= 13) ||
			base[i] == 32 || base[i] == '-');
}

bool	ft_exception(char *base)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (base[count] != '\0')
		count++;
	if (count == 0 || count == 1)
		return (false);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (false);
			j++;
		}
		if (ft_exception_chk(base, i))
			return (false);
		i++;
	}
	return (true);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_get_base(int nbr, char *base, int index)
{
	if (nbr >= index)
		ft_get_base((nbr / index), base, index);
	ft_putchar(base[nbr % index]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int index;

	if (!ft_exception(base))
		return ;
	index = 0;
	while (base[index] != '\0')
		index++;
	if (nbr == -2147483648)
	{
		ft_putnbr_base((nbr / index), base);
		ft_putchar(base[-(nbr % index)]);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else
		ft_get_base(nbr, base, index);
}
