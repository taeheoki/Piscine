/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <taeheoki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 02:58:40 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/10 03:07:16 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_program_name(char *str)
{
	ft_putstr(str);
}

int		main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
	ft_putstr("\n");
}
