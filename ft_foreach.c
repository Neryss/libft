/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:16:54 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/28 16:17:35 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}