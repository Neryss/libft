/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:35:21 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/23 17:30:35 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void				*memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*bdst;
	unsigned char	*bsrc;

	i = 0;
	bsrc = (unsigned char *)src;
	bdst = (unsigned char *)dst;
	while ((unsigned long)i < len)
	{
		
	}
}