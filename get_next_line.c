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

int get_next_line(const int fd, char **line)
{
	char 		*buff[BUFF_SIZE + 1]
	static char	*str;
	char 		*temp;
   
	if (fd < 1 || !line)
		return (-1);
	while (read(fd, buff, BUFF_SIZE) != 0)
	{
		if (str == NULL)
			str = buff;
		else 
			temp = strjoin(str, buff)
			str = temp;
	}


}