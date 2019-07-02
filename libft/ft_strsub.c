/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:11:08 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/13 09:40:44 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	ft_memset(new, '\0', len);
	while (len > 0)
	{
		new[i++] = s[start++];
		len--;
	}
	return (new);
}
