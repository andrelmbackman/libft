/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:38:48 by abackman          #+#    #+#             */
/*   Updated: 2021/11/25 16:28:54 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	str = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (k < ft_countwords(s, c))
	{
		j = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		str[k] = ft_strsub(s, j, i - j);
		k++;
	}
	str[k] = NULL;
	return (str);
}
