/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/08 15:52:05 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[30] = "Hello World! Vote for Pedro.";
	char	str2[] = "Pedro";
	char	str3[] = "";
	char	str4[] = "Juan";
	char	*p;

	p = strstr(str1, str2);
	printf("   strstr the \"%s\" in \"%s\" is at %p\n\n", str2, str1, p);
	p = ft_strstr(str1, str2);
	printf("ft_strstr the \"%s\" in \"%s\" is at %p\n\n", str2, str1, p);

	p = strstr(str1, str3);
	printf("   strstr the \"%s\" in \"%s\" is at %p\n\n", str3, str1, p);
	p = ft_strstr(str1, str3);
	printf("ft_strstr the \"%s\" in \"%s\" is at %p\n\n", str3, str1, p);

	p = strstr(str1, str4);
	printf("   strstr the \"%s\" in \"%s\" is at %p\n\n", str4, str1, p);
	p = ft_strstr(str1, str4);
	printf("ft_strstr the \"%s\" in \"%s\" is at %p\n\n", str4, str1, p);
	return (0);
}
