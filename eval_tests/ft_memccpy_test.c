/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/25 18:14:15 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[30] = "Hello World! Vote for Pedro.";
	char	str2[] = "Pedro";
	char	str3[30] = "Hello World! Vote for Pedro.";
	char	*p;
	int		c = 'o';

	printf("\n\nstr1: %s\nstr2: %s\n\n", str1, str2);
	p = ft_memccpy(str1, str2, c, 5);
	printf("ft_memccpy: str1: %s\nstr2: %s\naddress of %c: %p\n\n", str1, str2, c, p);
	ft_strcpy(str1, str3);
	printf("str1: %s\nstr2: %s\n\n", str1, str2);
	p = memccpy(str1, str2, c, 5);
	printf("memccpy:    str1: %s\nstr2: %s\naddress of %c: %p\n\n", str1, str2, c, p);
	return (0);
}
