/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:13:34 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/24 10:26:51 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	char			*bdst;
	const char		*bsrc;

	bdst = dst;
	bsrc = src;
	i = 0;
	while (n--)
	{
		*bdst = *bsrc;
		if (*bsrc == c)
			return (bdst + 1);
		bdst++;
		bsrc++;
	}
	return (NULL);
}
