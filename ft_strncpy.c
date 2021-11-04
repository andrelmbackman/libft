/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:24:07 by abackman          #+#    #+#             */
/*   Updated: 2021/11/04 10:02:44 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *des, const char *src, size_t len)
{
	unsigned long	i;
	unsigned long	j;

	i = ft_strlen(src);
	j = 0;
	while (j < len)
	{
		des[j] = src[j];
		j++;
	}
	if (i < len)
	{
		ft_bzero((des + j), (len - i));
	}
	return (des);
}
