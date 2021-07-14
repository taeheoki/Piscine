/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:46:37 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 00:28:28 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int		ft_base_len(char *base);
int		nbr_size(int nbr, int base_to_len);
bool	is_space(char c);
int		ft_change_nbr(char *str, char *base, int base_len);
bool	ft_exception(char *base);

char	*putnbr_b(int nbr, char *base_to)
{
	int		base_to_len;
	int		size;
	char	*arr;

	base_to_len = ft_base_len(base_to);
	size = nbr_size(nbr, base_to_len);
	if ((arr = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (0);
	if (nbr < 0)
	{
		arr[0] = '-';
		nbr *= -1;
	}
	else if (nbr == 0)
		arr[0] = base_to[0];
	arr[size] = '\0';
	while (nbr)
	{
		arr[--size] = base_to[nbr % base_to_len];
		nbr /= base_to_len;
	}
	return (arr);
}

int		atoi_b(char *nbr, char *base_from)
{
	int		number;
	int		base_from_len;
	int		minus;

	minus = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			minus *= -1;
		nbr++;
	}
	base_from_len = ft_base_len(base_from);
	number = ft_change_nbr(nbr, base_from, base_from_len);
	return (number * minus);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!(ft_exception(base_from)) || !(ft_exception(base_to)))
		return (0);
	return (putnbr_b(atoi_b(nbr, base_from), base_to));
}

int main(int argc, char *argv[])
{
	char *arr;
	int i;
	i = 0;
	arr = ft_convert_base(argv[1], argv[2], argv[3]);
	argc = 2;
	while (arr[i])
	{
		printf("arr[%d] : %d\n", i, arr[i]);
		i++;
	}
	return (0);
}
