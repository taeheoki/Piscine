/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:24:05 by taeheoki          #+#    #+#             */
/*   Updated: 2021/03/18 06:06:27 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

bool	is_op_valid(int b, char op)
{
	if (b == 0 && op == '/')
	{
		ft_putstr(DIV_ERR);
		return (false);
	}
	else if (b == 0 && op == '%')
	{
		ft_putstr(MOD_ERR);
		return (false);
	}
	return (true);
}

bool	is_operation(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

void	go_do_op(int a, int b, char op)
{
	int		idx;
	int		result;
	char	*operator;
	int		(*ft_op[5])(int, int);

	ft_op[0] = add;
	ft_op[1] = sub;
	ft_op[2] = mul;
	ft_op[3] = div;
	ft_op[4] = mod;
	operator = "+-*/%";
	idx = 0;
	while (idx < 5)
	{
		if (op == operator[idx])
		{
			result = ft_op[idx](a, b);
			ft_putnbr(result);
			break ;
		}
		idx++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op;

	if (argc != 4)
		return (0);
	else if (!is_operation(argv[2][0]) || argv[2][1] != '\0')
		ft_putstr("0\n");
	else
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = argv[2][0];
		if (is_op_valid(b, op))
			go_do_op(a, b, op);
	}
	return (0);
}
