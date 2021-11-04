/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:13:25 by abackman          #+#    #+#             */
/*   Updated: 2021/11/04 15:29:34 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)s;
	while (n > 0 && ret[i] != (char)c)
	{
		i++;
		n--;
	}
	if (ret[i] == (char)c)
	{
		return (ret + i);
	}
	else
	{
		return (NULL);
	}
}
