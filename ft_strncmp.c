/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:07:39 by abackman          #+#    #+#             */
/*   Updated: 2021/11/08 16:12:08 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	int i;
	int res;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) != '\0' && len > 0)
	{
		i++;
		len--;
	}
	res = s1[i] - s2[i];
	return (res);
}
