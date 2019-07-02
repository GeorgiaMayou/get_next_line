/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:05:53 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/30 16:45:00 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char*)s);
	while (*s++)
	{
		if (*s != c)
			continue;
		if (*s == c)
			return ((char *)s);
		else
			return (NULL);
	}
	return (NULL);
}
