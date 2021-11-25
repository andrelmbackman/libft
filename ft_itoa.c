/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:19:59 by abackman          #+#    #+#             */
/*   Updated: 2021/11/25 16:27:29 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	num;

	num = (long)n;
	length = ft_longlen(num);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
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
