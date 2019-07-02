/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:22:31 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/13 15:43:59 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	a;

	if (n == 0)
		return (0);
	while (*s1 == *s2 && n > 0)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	a = ((unsigned char)*s1 - (unsigned char)*s2);
	if (a > 0)
		return (1);
	else if (a == 0)
		return (0);
	else
		return (-1);
}
