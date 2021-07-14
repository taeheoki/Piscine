/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghan <ghan@student.42seou.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:52:02 by ghan              #+#    #+#             */
/*   Updated: 2021/03/13 21:15:09 by ghan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <fcntl.h>

int		dict_size(char *buf)
{
	int i;
	int size;

	size = 0;
	if (buf[0] != '\n')
		size = 1;
	i = 1;
	while (buf[i])
	{
		if (buf[i] == '\n' && buf[i - 1] != '\n')
			size++;
		i++;
	}
	return (size);
}

t_dict	*dict_parsing(t_dict *d_arr, char *buf, int d_size)
{
	if ((d_arr = (t_dict*)malloc(sizeof(t_dict) * d_size)) == 0)
		write(1, "Dict Error\n", 10);
	if (!split_dict(d_arr, buf))
		write(1, "Dict Error\n", 10);
	return (d_arr);
}

void	rush(int ac, char **av)
{
	int		fd;
	int		d_size;
	char	buf[4096];
	t_dict	*d_arr;

	if (ac == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(av[1], O_RDONLY);
	if (fd == -1)
		write(1, "Dict Error\n", 11);
	else
	{
		read(fd, buf, 4096);
		d_size = dict_size(buf);
		d_arr = 0;
		d_arr = dict_parsing(d_arr, buf, d_size);
		if (ac == 2)
			cmp_nbr(av[1], d_arr, d_size);
		else
			cmp_nbr(av[2], d_arr, d_size);
		free(d_arr);
	}
	close(fd);
}
