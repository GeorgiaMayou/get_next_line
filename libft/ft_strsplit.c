/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:48:09 by gmayou            #+#    #+#             */
/*   Updated: 2019/06/12 14:59:10 by gmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_strsplitter(char const *s, char c)
{
	char	**str;
	size_t	io;
	size_t	i;
	size_t	it;

	i = 0;
	io = 0;
	it = 0;
	if ((str = (char **)malloc((ft_wrdcnt(s, c) + 1) * sizeof(str))) == NULL)
		return (NULL);
	while (s[i] && io <= (ft_wrdcnt(s, c)) && (ft_wrdcnt(s, c)) > 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			str[io] = ft_strnew(ft_wrdlen(s, i, c));
		while (s[i] != c && s[i])
			str[io][it++] = s[i++];
		io++;
		it = 0;
	}
	if (io > 1)
		io = io - 1;
	str[io] = NULL;
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char **str;

	if (!s || !c)
		return (NULL);
	str = ft_strsplitter(s, c);
	return (str);
}
