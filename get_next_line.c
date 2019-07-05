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
	new = ft_strnew(ft_strlen(*line) + len);
	printf("%s||buffmv ", *line);
	ft_strcpy(new, *line);
	ft_strncat(new, buff, len);
	free(*line);
	return (new);
}

static int	ft_nlbuff(char *buff, char **line)
{
	size_t	len;
	char	*newl;

	if (buff[0] == 0)
		return (0);
	newl = ft_strchr(buff, '\n');
	if ((len = newl - buff) > 0)
	{
		printf("%s||nlbuff ", *line);
		*line = ft_buffmv(buff, line, len);
		//reset buff
		return (1);
	}
	else 
	{
		printf("%s||nlbuff2 ", *line);
		*line = ft_buffmv(buff, line, BUFF_SIZE);
		//reset buff
		return (0);
	}
}

int 		get_next_line(const int fd, char **line)
{
	static char	*buff;
	int			n;

	if (fd < 0 || !line)
		return (-1);
	if (!buff)
		buff = ft_strnew(BUFF_SIZE);
	printf("%s||gnl ", *line);
	while ((n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (ft_nlbuff(buff, line) == 1)
			return (1);
	}
	return (-1);
}
