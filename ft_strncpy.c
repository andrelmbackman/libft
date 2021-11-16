/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:24:07 by abackman          #+#    #+#             */
/*   Updated: 2021/11/16 14:22:34 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *des, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	j = 0;
	while (j < len)
	{
		if (src[j] == '\0')
		{
			des[j] = '\0';
			break ;
		}
		des[j] = src[j];
		j++;
	}
	if (i < len)
	{
		ft_bzero((des + j), (len - i));
	}
	return (des);
}
