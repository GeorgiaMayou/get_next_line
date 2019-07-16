/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:59:56 by gmayou            #+#    #+#             */
/*   Updated: 2019/05/25 16:38:50 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *new;

	new = (char *)malloc(ft_strlen(str) + 1);
	if (new == NULL)
		return (NULL);
	else
	{
		ft_strcpy(new, str);
	}
	return (new);
}
