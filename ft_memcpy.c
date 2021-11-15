/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:59:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/15 11:01:45 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t len)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)des;
	s = (char *)src;
	i = 0;
	while (len > 0)
	{
		d[i] = s[i];
		i++;
		len--;
	}
	return (d);
}
