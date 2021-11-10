/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:54:14 by abackman          #+#    #+#             */
/*   Updated: 2021/11/10 17:59:50 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	pos;

	i = 0;
	res = 0;
	pos = 1;
	while (nptr[i++] != '\0')
	{
		while (nptr[i] >= '\n' && nptr[i] <= '\v' && nptr[i] != '\0')
		{
			i++;
		}
		if (nptr[i] == '-')
		{
			pos = -1;
			i++;
		}
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			res = res * 10 + (nptr[i] - '0');
			i++;
		}
	}
	return (res * pos);
}
