/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:35:56 by abackman          #+#    #+#             */
/*   Updated: 2021/11/15 11:04:03 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	checkstrn(const char *h, const char *n, size_t i, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p;
	int		res;

	p = NULL;
	res = checkstrn(haystack, needle, 0, len);
	if (needle[0] == '\0')
	{
		return ((char *) haystack);
	}
	else if (res > 0)
	{
		p = (char *)&haystack[res];
		return (p);
	}
	else
	{
		return (NULL);
	}
}

static	int	checkstrn(const char *h, const char *n, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (len > 0 && n[j] != '\0')
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
		len--;
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
