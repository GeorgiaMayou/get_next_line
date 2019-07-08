/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:11:55 by gmayou            #+#    #+#             */
/*   Updated: 2019/07/02 10:12:37 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*ft_buffmv(char *buff, char **line, size_t len)\
{
	char *new;

	if (*line == 0)
		return(ft_strdup(buff));
	new = ft_strnew(ft_strlen(*line) + len + 1);
	printf("%s||buffmv ", *line);
	new = ft_strdup(*line);
	ft_strncat(new, buff, len);
	free(*line);
	return (new);
}

static int	ft_nlbuff(char **holder, char *buff, char **line)
{
	size_t	len;
	char	*newl;
	char 	*news;

	if (buff[0] == 0)
		return (0);
	newl = ft_strchr(buff, '\n');
	*holder = buff;
	if ((len = newl - buff) > 0)
	{
		*line = ft_buffmv(buff, line, len);
		news = buff + len + 1;
		*holder = ft_strdup(news);
		return (1);
	}
	else 
	{
		*line = ft_buffmv(buff, line, BUFF_SIZE);
		ft_strclr(buff);
		return (0);
	}
}

int 		get_next_line(const int fd, char **line)
{
	char 		buff[BUFF_SIZE + 1];
	static char *mybuff;
	int			n;

	if (!mybuff)
		mybuff = ft_strnew(0);
	if (fd < 0 || !line)
		return (-1);
	while ((n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (ft_nlbuff(&mybuff, buff, line) == 1)
			return (1);
	}
	return (0);
}
		