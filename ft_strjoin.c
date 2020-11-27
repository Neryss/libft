/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:43:40 by ckurt             #+#    #+#             */
/*   Updated: 2020/11/27 10:17:53 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*fstr;
	int				tlen;

	tlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(fstr = calloc(tlen + 1, sizeof(char))))
		return (NULL);
	fstr = ft_memcpy(fstr, s1, ft_strlen(s1));
	fstr = ft_strcat(fstr, (char *)s2);
	return (fstr);
}
