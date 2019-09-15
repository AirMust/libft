/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slynell <slynell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:19:50 by slynell           #+#    #+#             */
/*   Updated: 2019/09/14 15:19:51 by slynell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_wcount(char const *s, char c)
{
	int				i;
	int				w;
	int				start;

	w = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
			w++;
	}
	return (w);
}

static char			*ft_new_sub(char const *s, int i, int j)
{
	char			*str;
	int				k;

	str = (char*)malloc(sizeof(char) * (j - i + 1));
	k = i;
	while (k < j)
	{
		str[k - i] = s[k];
		k++;
	}
	str[k - i] = 0;
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	int				i;
	int				w;
	int				start;
	char			**rez;

	i = 0;
	if (c > 126 || c < 32)
		return (NULL);
	w = ft_wcount(s, c);
	rez = (char**)malloc(sizeof(char*) * (w + 1));
	if (rez == NULL)
		return (NULL);
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i != start)
			rez[w++] = ft_new_sub(s, start, i);
	}
	rez[w] = (char*)malloc(sizeof(char));
	rez[w] = 0;
	return (rez);
}
