/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:13 by abackman          #+#    #+#             */
/*   Updated: 2021/11/11 18:42:18 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *des, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = ft_strlen(des);
	j = 0;
	l = i + ft_strlen(src);
	while ((i + j) < dstsize && src[j] != '\0')
	{
		des[i + j] = src[j];
		j++;
	}
	des[dstsize - 1] = '\0';
	return (l);
}
