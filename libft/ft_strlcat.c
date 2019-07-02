/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:13:05 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/30 17:23:49 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (dst[len] && len < dstsize)
		len++;
	i = 0;
	while (len + i + 1 < dstsize && src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	if (dstsize > len)
		dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
