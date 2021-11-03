/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:59:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/03 17:23:31 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *des, void *src, size_t len)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)des;
	s = (char *)src;
	i = 0;
	if (&des == &src)
	{
		return (NULL);
	}
	while (len > 0)
	{
		d[i] = s[i];
		i++;
		len--;
	}
	return (d);
}
