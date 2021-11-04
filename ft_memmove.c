/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:37:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/04 14:08:34 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *des, const void *src, size_t n)
{
	char			*str;
	unsigned long	i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)des;
	s = (char *)src;
	str = (char *)malloc(n * sizeof(char));
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = str[i];
		i++;
	}
	free(str);
	return (des);
}
