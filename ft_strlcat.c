/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:13 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 13:33:47 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *des, const char  *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(des);
	j = 0;
	while (size > 0)
	{
		des[i++] = src[j++];
		size--;
	}
	des[i] = '\0';
	return (ft_strlen(des));
}
