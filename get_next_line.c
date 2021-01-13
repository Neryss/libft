/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:06:22 by ckurt             #+#    #+#             */
/*   Updated: 2021/01/13 17:36:25 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_free_strjoin(char *s1, char *s2)
{
	size_t		lens1;
	size_t		lens2;
	char		*res;

	if (!s1 && !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!(res = malloc(sizeof(char) * (lens1 + lens2 + 1))))
		return (NULL);
	ft_memmove(res, s1, lens1);
	ft_memmove(res + lens1, s2, lens2);
	res[lens1 + lens2] = 0;
	free(s1);
	return (res);
}

static char		*fetch_line(char *str)
{
	int			i;
	char		*res;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != 10)
		i++;
	if (!(res = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != 10)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

static char		*fetch_save(char *save)
{
	char		*res;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!save)
		return (NULL);
	while (save[i] && save[i] != 10)
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	if (!(res = malloc(sizeof(char) * ((ft_strlen(save) - i) + 1))))
		return (NULL);
	i++;
	while (save[i])
		res[j++] = save[i++];
	res[j] = 0;
	free(save);
	return (res);
}

int				get_next_line(int fd, char **line)
{
	char		*buffer;
	static char	*save[10240];
	int			readvalue;

	readvalue = 1;
	if (fd < 0 || !line || BUFFER_SIZE < 1 ||
		!(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while (readvalue != 0 && !ft_is_in_str(save[fd], 10))
	{
		if ((readvalue = read(fd, buffer, BUFFER_SIZE)) == -1)
		{
			free(buffer);
			return (-1);
		}
		buffer[readvalue] = 0;
		save[fd] = ft_free_strjoin(save[fd], buffer);
	}
	free(buffer);
	*line = fetch_line(save[fd]);
	save[fd] = fetch_save(save[fd]);
	if (readvalue == 0)
		return (0);
	return (1);
}
