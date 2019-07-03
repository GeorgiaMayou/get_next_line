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

static char	*ft_buffmv(char *buff, char **line, size_t len)\
{
	char *new;
	char *temp;

	if (len == 0)
		return(line);
	else
		temp = ft_strnew(len);
		temp = ft_strncpy(temp, buff, len);
	new = ft_strcat(line, temp);
	free(temp);
	free(line);
	return (new);
}

static int	ft_nlbuff(char *buff, char **line)
{
	size_t	len;
	char	*newl;

	if (buff = 0)
		return (0);
	newl = ft_strchr(buff, '\n');
	if ((len = newl - buff) > 0)
	{
		*line = ft_buffmv(buff, line, len);
		return (1);
	}
	else 
	{
		*line = ft_buffmv(buff, line, BUFF_SIZE)
		return (0);
	}
}

int 		get_next_line(const int fd, char **line)
{
	static char	*buff;
	int			n;

	if (fd < 1 || !line)
		return (-1);
	if (!buff)
		buff = ft_strnew(BUFF_SIZE);
	while ((n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (ft_nlbuff(buff, line) == 1)
			return (1);
	}
}