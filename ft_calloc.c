/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:31:01 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/24 15:45:05 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	i;
	unsigned char	*array;

	i = 0;
	if (!(array = (malloc(sizeof(size) * count))))
		return (NULL);
	while (i < count)
		array[i++] = '\0';
	return (array);
}
