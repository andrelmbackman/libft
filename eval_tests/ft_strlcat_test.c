/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat
	printf("after ft_strlcat:\nStr1        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 11:41:00 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[40] = "Hello World!";
	char	str2[] = "... Goodbye World!";
	printf("Str1: %s\nStr2: %s\n", str1, str2);
	unsigned long i = ft_strlcat(str1, str2, 11);
	printf("after ft_strlcat:\nStr1: %s\nThe size is %lu\n", str1, i);
	return (0);
}
