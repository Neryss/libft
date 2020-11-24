/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:43:40 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/24 17:23:07 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*fstr;
	int				tlen;

	tlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(fstr = malloc(sizeof(char) * (tlen + 1))))
		return (NULL);
	ft_bzero(fstr, tlen + 1);
	fstr = ft_memcpy(fstr, s1, ft_strlen(s1));
	fstr = ft_strcat(fstr, (char *)s2);
	return (fstr);
}
