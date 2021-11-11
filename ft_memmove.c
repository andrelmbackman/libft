/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:37:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/11 16:15:55 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t n)
{
	unsigned char			*str;
	unsigned long			i;
	unsigned char			*d;
	unsigned char			*s;

	i = 0;
	d = (unsigned char *)des;
	s = (unsigned char *)src;
	str = (unsigned char *)ft_memalloc(n * sizeof(unsigned char));
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
