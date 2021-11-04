/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:16:58 by abackman          #+#    #+#             */
/*   Updated: 2021/11/04 13:08:37 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	char			*d;
	char			*s;
	int				i;

	d = (char *)des;
	s = (char *)src;
	i = 0;
	while (n > 0 && s[i] != c)
	{	
		d[i] = s[i];
		i++;
	}
	if (s[i] == c)
	{
		d[i] = c;
		return (d + i + 1);
	}
	else
	{
		return (NULL);
	}
}
