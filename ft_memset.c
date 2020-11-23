/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:13:04 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/23 17:29:45 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//Delete header
#include <stdio.h>

void				*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*bstr;

	bstr = (unsigned char *)b;
	i = 0;
	while ((unsigned long)i < len)
		bstr[i++] = c;
	return (b);
}
