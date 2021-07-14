/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:21:23 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/08 02:12:43 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] > s2[index])
			return (1);
		else if (s1[index] < s2[index])
			return (-1);
		index++;
	}
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	else if (s1[0] == '\0')
		return (-1);
	else if (s2[0] == '\0')
		return (1);
	return (0);
}
