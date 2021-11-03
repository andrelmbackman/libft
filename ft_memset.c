/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:35:49 by abackman          #+#    #+#             */
/*   Updated: 2021/11/03 17:28:57 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t len)
{
	unsigned char	*ptr;

	ptr = str;
	while (len > 0)
	{
		*ptr = x;
		ptr++;
		len--;
	}
	return (ptr);
}
