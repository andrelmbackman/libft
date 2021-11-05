/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:42:34 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 13:15:48 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s);
	p = NULL;
	while (i < j && s[i] != c)
	{
		i++;
		p = (char *)&s[i];
	}
	if (s[i] == c)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}
