/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:44:10 by ckurt             #+#    #+#             */
/*   Updated: 2021/02/10 15:38:25 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_len(char *str)
{
	int	i;

	i = 0;
	while (ft_iswhitespace(str[i]) || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	return (i);
}

int	ft_atof_len(char *str)
{
	int	len;

	len = ft_atoi_len(str);
	str += len;
	if (*str != '.')
		return (len);
	len += ft_atoi_len(str + 1) + 1;
	return (len);
}

double	ft_atof(char *str)
{
	double	ent;
	double	dec;

	ent = ft_atoi(str);
	str += ft_atoi_len(str);
	if (*str != '.')
		return (ent);
	dec = ft_atoi(++str);
	dec /= ft_math_power(10, ft_nblen(dec));
	if (ent >= 0)
		return (ent + dec);
	return (ent - dec);
}
