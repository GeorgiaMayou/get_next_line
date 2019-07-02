/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:01:09 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/05 16:23:09 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	len;
	char	*new;
	int		i;

	i = 0;
	len = ft_strlen(str);
	new = ft_strnew(len);
	while (len--)
		new[i++] = str[len];
	return (new);
}
