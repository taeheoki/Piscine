/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:47:15 by ghan              #+#    #+#             */
/*   Updated: 2021/03/14 22:19:29 by taeheoki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_dict
{
	int			k_len;
	int			v_len;
	char		*key;
	char		*value;
}				t_dict;

int				split_dict(t_dict *d_arr, char *buf);
char			**ft_split(char *str);
void			rush(int ac, char **av);
void			cmp_nbr(char *arg, t_dict *d_arr, int d_size);
void			change_digit(char *arg, t_dict *d_arr, int d_size, int i);
void			over_hundred(t_dict *d_arr, int d_size, int i);
void			two_digits(char *arg, t_dict *d_arr, int d_size, int i);
void			three_digits(t_dict *d_arr, int d_size, int i);
int				cond_check(int i, char *arg);
int				ft_strcmp(char *str1, char *str2);
int				ft_strlen(char *arg);
int				write_value(char *str, t_dict *d_arr, int d_size, int arg_ind);
int				skip_index(char *str);
int				value_length(char *str, int index);
void			value_copy(t_dict d_unit, char *str, int v_len, int j);
int				key_length(char *str);
int				key_copy(t_dict d_unit, char *str);

#endif
