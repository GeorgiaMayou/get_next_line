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

int ft_linemvr(char **line, char **stat)
{
	int		i;
	char	*temp;

	i = 0;
	while (stat[i] != '\n' || stat[i] != '\0')
		i++;
	if (stat[i] == '\n')
	{
		line = ft_strsub(stat, 0, i);
		temp = ft_strdup(stat[i + 1]);
		free (stat);
		stat = temp;
	}
	else 
		*line = ft_strdup(stat);
		return(1);
}

int	ft_retvals(char **stat, int n, char **line, int fd)
{
	char *newstat;

	newstat = stat[fd];
	if (n < 0 || !line)
		return (-1);
	else if (n == 0 && !newstat)
	{
		return(0);
	}
	else
		return (ft_linemvr(line, &newstat));
}

int	get_next_line(const int fd, char **line)
{
	int 		n;
	char		*buff[BUFF_SIZE + 1];
	static char	*stat[100];
	char		*temp;

	if (fd < 0 || !line)
		return (-1);
	while((n = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[n] = '\0';
		if (!stat[fd])
			stat[fd] = ft_strdup(buff);
		else 
		{
			temp = ft_strjoin(stat[fd], (const char)buff);
			free(stat[fd]);
			stat[fd] = temp;
		}
		if (ft_strchr(buff, '\n'))
			break;
	}
	return (ft_retvals(stat, n, line, fd));
}