/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 10:12:00 by ckurt             #+#    #+#             */
/*   Updated: 2021/01/14 10:12:18 by ckurt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strjoinc(char *s1, char c)
{
	int		i;
	int		tlen;
	char	*ret;

	i = 0;
	if (!s1)
	{
		if (!(ret = malloc(sizeof(char) * 2)))
			return (0);
		ret[0] = c;
		ret[1] = 0;
		return (ret);
	}
	tlen = ft_strlen(s1) + 1;
	if (!(ret = malloc(sizeof(char) * (tlen + 1))))
		return (0);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = c;
	ret[i + 1] = 0;
	free(s1);
	return (ret);
}

static int	ft_gnl(int fd, char **line)
{
	char	buffer;
	int		ret;
	int		readvalue;

	ret = 0;
	if (!line)
		return (-1);
	if (!(*line = malloc(sizeof(char) * 1)))
		return (-1);
	*line[0] = 0;
	while ((readvalue = read(fd, &buffer, 1)) && buffer != '\n')
		*line = ft_strjoinc(*line, buffer);
	if (!*line)
		*line = ft_strjoinc(*line, '\0');
	if (readvalue > 0)
		ret = 1;
	return (ret);
}

static char	**add_line(char **src, char *line, int i)
{
	char	**new;
	int		j;

	new = ft_calloc(i + 2, sizeof(char *));
	if (!new)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new[j] = ft_strdup(src[j]);
		free(src[j++]);
	}
	free(src);
	new[j++] = ft_strdup(line);
	new[j] = NULL;
	return (new);
}

char		**ft_read_file(int fd)
{
	char	*line;
	char	**file;
	int		i;
	int		ret;

	i = 0;
	ret = 1;
	while (ret)
	{
		ret = ft_gnl(fd, &line);
		if (ret == -1)
			return (NULL);
		if (*line)
			file = add_line(file, line, i++);
		free(line);
		if (!file)
			return (NULL);
	}
	return (file);
}
