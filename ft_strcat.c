/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:16:46 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 13:35:48 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *des, const char *src)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(des);
	j = 0;
	while (src[j] != '\0')
	{
		des[i++] = src[j++];
	}
	des[i] = '\0';
	return (des);
}
