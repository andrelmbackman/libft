/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:57:43 by abackman          #+#    #+#             */
/*   Updated: 2021/11/23 17:55:35 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	checkstr(const char *h, const char *n, size_t i, size_t j);

char	*ft_strstr(const char *haystack, const char *needle)
{	
	char	*p;
	int		res;

	p = NULL;
	res = checkstr(haystack, needle, 0, 0);
	if (res == 0)
	{
		return ((char *) haystack);
	}
	if (res > 0)
	{
		p = (char *)&haystack[res];
		return (p);
	}
	else
		return (NULL);
}

static	int	checkstr(const char *h, const char *n, size_t i, size_t j)
{
	if (n[j] == '\0')
	{
		return (0);
	}
	while (h[i] != '\0' && n[j] != '\0')
	{
		if (h[i] == n[j])
		{
			i++;
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	if (n[j] == '\0')
	{
		return (i - j);
	}
	else
	{
		return (-1);
	}
}
