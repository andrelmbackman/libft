/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/08 15:52:41 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str1[30] = "Hello World! Vote for Pedro.";
	char	str2[] = "Pedro";
	char	str3[] = "";
	char	str4[] = "Juan";
	char	*p;

	p = strnstr(str1, str2, 27);
	printf("   strnstr the \"%s\" in \"%s\" is at %p\n\n", str2, str1, p);
	p = ft_strnstr(str1, str2, 27);
	printf("ft_strnstr the \"%s\" in \"%s\" is at %p\n\n", str2, str1, p);

	p = strnstr(str1, str3, 5);
	printf("   strnstr the \"%s\" in \"%s\" is at %p\n\n", str3, str1, p);
	p = ft_strnstr(str1, str3, 5);
	printf("ft_strnstr the \"%s\" in \"%s\" is at %p\n\n", str3, str1, p);

	p = strnstr(str1, str4, 5);
	printf("   strnstr the \"%s\" in \"%s\" is at %p\n\n", str4, str1, p);
	p = ft_strnstr(str1, str4, 4);
	printf("ft_strnstr the \"%s\" in \"%s\" is at %p\n\n", str4, str1, p);
	return (0);
}
