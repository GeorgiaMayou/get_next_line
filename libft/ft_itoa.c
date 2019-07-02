/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:35:33 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/12 16:23:21 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long int n)
{
	size_t	i;

	i = 1;
	if (n > 0)
	{
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
		return (i);
	}
	else if (n < 0)
	{
		i++;
		while (n < 0)
		{
			n = n * 10;
			i++;
		}
		return (i);
	}
	else
		return (1);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	new;
	int			i;
	int			neg;

	i = 0;
	neg = 0;
	new = (long int)n;
	len = ft_nbrlen(new);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (new < 0 && (neg = 1))
		new = new * -1;
	while (new >= 10)
	{
		str[i++] = (new % 10) + 48;
		new = new / 10;
	}
	if (new < 10)
		str[i] = new + 48;
	if (neg == 1)
		str[i + 1] = '-';
	return (ft_strrev(str));
}
