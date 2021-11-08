/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:20:21 by abackman          #+#    #+#             */
/*   Updated: 2021/11/08 17:10:38 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memccpy(void *des, const void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)des;
	s = (unsigned char *)src;
	i = 0;
	while(i < len)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			return (d + i + 1);
		}
		i++;
	}
	return (NULL);
}
