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
		*line = ft_strdup(*holder);
		*holder = strdup(newl + 1);
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
		