/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:39:08 by abackman          #+#    #+#             */
/*   Updated: 2021/11/04 15:27:57 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	int		j;
	char	*str1;
	char	*str2;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (n > 0 && str1[j] == str2[j])
	{
		j++;
		n--;
	}
	return (str1[j] - str2[j]);
}
