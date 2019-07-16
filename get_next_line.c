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


static int	ft_nlbuff(char **holder, char *buff, char **line)
{
	char	*newl;

	if (buff[0] == '\0')
		return (0);
	*holder = ft_strjoin(*holder, buff);
	newl = ft_strchr(*holder, '\n');
	if (newl)
	{
		newl[0] = '\0';
		*line = ft_strdup(*holder);
		*holder = ft_strdup(newl + 1);
		return (1);
	}
	else 
	{
		*line = strdup(*holder);
		return (0);
	}
}

int 		get_next_line(const int fd, char **line)
{
	char 		buff[BUFF_SIZE + 1];
	static char *stat;
	int			n;

	if (!stat)
		stat = ft_strnew(0);
	if (fd < 0 || !line)
		return (-1);
	ft_bzero(buff, BUFF_SIZE + 1);
	while ((n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (n < BUFF_SIZE)
		{
			*line = ft_strjoin(stat, buff);
			return (1);
		}
		if (ft_nlbuff(&stat, buff, line) == 1)
			return (1);
		ft_bzero(buff, BUFF_SIZE);
	}
	return (0);
}
		