/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slynell <slynell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:19:50 by slynell           #+#    #+#             */
/*   Updated: 2019/09/14 15:19:51 by slynell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		len;
	size_t		len_d;

	d = dest;
	s = src;
	len = size;
	while (len-- != 0 && *d != 0)
		d++;
	len_d = d - dest;
	len = size - len_d;
	if (len == 0)
		return (len_d + ft_strlen(s));
	while (*s != 0)
	{
		if (len != 1)
		{
			*d++ = *s;
			len--;
		}
		s++;
	}
	*d = '\0';
	return (len_d + (s - src));
}
