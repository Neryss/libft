/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinrange.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:56:51 by ckurt             #+#    #+#             */
/*   Updated: 2021/03/15 09:58:28 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isinrange(long nb, long min, long max)
{
	if (nb < min || nb > max)
		return (0);
	return (1);
}