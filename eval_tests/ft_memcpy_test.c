/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/25 18:13:21 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[30] = "Hello World! Vote for Pedro.";
	char	str2[] = "Hiver";
	char	str3[30] = "Hello World! Vote for Pedro.";
	char	*p;

	printf("\n\nstr1: %s\nstr2: %s\n", str1, str2);
	p = ft_memcpy(str1, str2, 5);
	printf("ft_memcpy: str1: %s %p\n\n", str1, p);
	ft_strcpy(str1, str3);
	printf("str1: %s\nstr2: %s\n", str1, str2);
	p = memcpy(str1, str2, 5);
	printf("memcpy:    str1: %s %p\n\n", str1, p);
	return (0);
}
