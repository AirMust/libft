/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slynell <slynell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:19:50 by slynell           #+#    #+#             */
/*   Updated: 2019/09/14 15:19:51 by slynell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, char *src, size_t nb)
{
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(dest);
	while (i < (int)nb && src[i] != '\0')
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
