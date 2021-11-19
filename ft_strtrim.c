/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:42:21 by abackman          #+#    #+#             */
/*   Updated: 2021/11/19 13:52:04 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	while (j != i && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t' || \
	s[j] == '\0'))
		j--;
	return (ft_strsub(s, (unsigned int)i, (j - i + 1)));
}
