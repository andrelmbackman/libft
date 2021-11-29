/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/10 13:30:42 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char	str1[] = "ABCDEF";
	char	str2[] = "AB&DEF";
	char	str3[] = "ABCDEF";

	printf("str: %s\n", str1);
	str1[2] = tolower(str1[2]);
	printf("tolower:    %s\n\n", str1);

	printf("str: %s\n", str3);
	str3[2] = tolower(str3[2]);
	printf("ft_tolower: %s\n\n", str3);

	printf("str: %s\n", str2);
	str2[2] = tolower(str2[2]);
	printf("tolower:    %s\n\n", str2);

	printf("str: %s\n", str2);
	str2[2] = tolower(str2[2]);
	printf("ft_tolower: %s\n\n", str2);
	return (0);
}
