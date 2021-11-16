/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:39:08 by abackman          #+#    #+#             */
/*   Updated: 2021/11/16 15:06:27 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n < 1)
		return (0);
	while (n > 0 && (str1[i] == str2[i]) && str1 != NULL && str2 != NULL)
	{
		i++;
		n--;
	}
	if (str1[i] == str2[i] && n > 0)
		return (0);
	else if (str1[i - 1] == str2[i - 1] && n == 0)
		return (0);
	else
		return (str1[i] - str2[i]);
}
