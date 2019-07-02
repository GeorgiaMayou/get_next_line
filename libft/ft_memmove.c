/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:50:00 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/29 14:18:29 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ptrd;
	const char	*ptrs;

	i = 0;
	ptrd = dst;
	ptrs = src;
	if (ptrs == ptrd)
		return (dst);
	if (ptrs < ptrd)
	{
		while (len--)
			ptrd[len] = ptrs[len];
	}
	else
	{
		while (i < len)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dst);
}
