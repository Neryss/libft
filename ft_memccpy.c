/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:13:34 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/23 17:46:40 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	char *bdst;
	const char *bsrc;

	bdst = dst;
	bsrc = src;
	i = 0;
	while ((unsigned long)i < n)
	{
		if (bsrc[i] == c)
			return (&bdst[i + 1]);
		bdst[i] = bsrc[i];
		i++;
	}
	return (NULL);
}
