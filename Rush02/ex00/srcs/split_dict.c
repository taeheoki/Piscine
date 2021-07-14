/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghan <ghan@student.42seou.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:52:02 by ghan              #+#    #+#             */
/*   Updated: 2021/03/14 21:08:58 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	clear_sp_strs(char **sp_strs)
{
	int idx;

	idx = 0;
	while (sp_strs[idx])
	{
		free(sp_strs[idx]);
		idx++;
	}
	free(sp_strs);
}

int		split_dict(t_dict *d_arr, char *buf)
{
	char	**sp_strs;
	int		i;
	int		j;

	sp_strs = ft_split(buf);
	i = 0;
	while (sp_strs[i])
	{
		if ((d_arr[i].k_len = key_length(sp_strs[i])) == 0)
			return (0);
		if ((d_arr[i].key = (char*)malloc(d_arr[i].k_len + 1)) == 0)
			return (0);
		key_copy(d_arr[i], sp_strs[i]);
		j = 0;
		if ((j = skip_index(sp_strs[i])) < 0)
			return (0);
		if ((d_arr[i].v_len = value_length(sp_strs[i], j)) < 0)
			return (0);
		if ((d_arr[i].value = (char*)malloc(d_arr[i].v_len + 1)) == 0)
			return (0);
		value_copy(d_arr[i], sp_strs[i], d_arr[i].v_len, j);
		i++;
	}
	clear_sp_strs(sp_strs);
	return (1);
}
