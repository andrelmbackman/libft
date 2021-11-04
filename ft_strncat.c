/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:42:03 by abackman          #+#    #+#             */
/*   Updated: 2021/11/04 16:48:31 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *des, const char *src, size_t n)
{
	int	i;
	int	j;

	i = ft_strlen(des);
	j = 0;
	while (n > 0)
	{
		des[i++] = src[j++];
		n--;
	}
	des[i] = '\0';
	return (des);
}
