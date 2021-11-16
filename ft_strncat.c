/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:42:03 by abackman          #+#    #+#             */
/*   Updated: 2021/11/16 14:12:01 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *des, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(des);
	j = 0;
	while (n > 0 && src[j] != '\0')
	{
		des[i++] = src[j++];
		n--;
	}
	des[i] = '\0';
	return (des);
}
