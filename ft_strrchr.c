/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:23:34 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 13:30:00 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = (ft_strlen(s) + 1);
	p = NULL;
	while (j > i && s[j] != c)
	{
		j--;
		p = (char *)&s[j];
	}
	if (s[j] == c)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}
