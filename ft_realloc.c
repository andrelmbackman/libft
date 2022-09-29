/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:21:15 by abackman          #+#    #+#             */
/*   Updated: 2022/09/29 17:25:19 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;
	
	if (ptr == NULL)
		return (ft_memalloc(size));
	if (size < 1)
		return (ptr);
	new = ft_memalloc(size);
	if (new == NULL)
		return (ptr);
	ft_memcpy(new, ptr, size);
	return (new);
}