/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:14:37 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/25 16:33:01 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cc;
	size_t			i;

	i = 0;
	if (len == 0)
		return (b);
	cc = (unsigned char *)b;
	while (len > i)
	{
		cc[i] = c;
		i++;
	}
	return (cc);
}
