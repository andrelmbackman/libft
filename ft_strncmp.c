/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:07:39 by abackman          #+#    #+#             */
/*   Updated: 2021/11/16 17:50:26 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	int				i;
	unsigned char	ch1;
	unsigned char	ch2;

	i = 0;
	if (len < 1)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0') && (s2[i] != '\0') && len > 0)
	{
		i++;
		len--;
	}
	if (len == 0)
	{
		ch1 = (unsigned char)s1[i - 1];
		ch2 = (unsigned char)s2[i - 1];
		return (ch1 - ch2);
	}
	else
	{
		ch1 = (unsigned char)s1[i];
		ch2 = (unsigned char)s2[i];
		return (ch1 - ch2);
	}
}
