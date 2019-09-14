/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slynell <slynell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:58:20 by slynell           #+#    #+#             */
/*   Updated: 2019/09/14 10:58:51 by slynell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(char *nptr)
{
	int				i;
	int				flag;
	long			x;

	x = 0;
	flag = 1;
	i = 0;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t' || \
	nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == '\v'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			flag = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		x = x * 10 + (nptr[i++] - 48);
	return ((int)(x * flag));
}
