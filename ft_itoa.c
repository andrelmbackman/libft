/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:19:59 by abackman          #+#    #+#             */
/*   Updated: 2021/11/19 16:46:42 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_intlen(long n)
{
	if (n >= 1000000000)
		return (10);
	else if (n >= 100000000)
		return (9);
	else if (n >= 10000000)
		return (8);
	else if (n >= 1000000)
		return (7);
	else if (n >= 100000)
		return (6);
	else if (n >= 10000)
		return (5);
	else if (n >= 1000)
		return (4);
	else if (n >= 100)
		return (3);
	else if (n >= 10)
		return (2);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	num;

	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		length = ft_intlen(num) + 1;
		str = (char *)ft_memalloc((length + 2) * sizeof(char));
		str[0] = '-';
	}
	else
	{
		length = ft_intlen(num);
		str = (char *)ft_memalloc((ft_intlen(num) + 1) * sizeof(char));
	}
	str[length--] = '\0';
	while (length >= 0 && str[length] != '-')
	{
		str[length] = ((num % 10) + '0');
		num /= 10;
		length--;
	}
	return (str);
}
