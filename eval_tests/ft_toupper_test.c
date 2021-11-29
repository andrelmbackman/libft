/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/10 13:26:29 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char	str1[] = "abcdef";
	char	str2[] = "AB&DEF";
	char	str3[] = "abcdef";

	printf("str: %s\n", str1);
	str1[2] = toupper(str1[2]);
	printf("toupper:    %s\n\n", str1);

	printf("str: %s\n", str3);
	str3[2] = ft_toupper(str3[2]);
	printf("ft_toupper: %s\n\n", str3);

	printf("str: %s\n", str2);
	str2[2] = toupper(str2[2]);
	printf("toupper:    %s\n\n", str2);

	printf("str: %s\n", str2);
	str2[2] = ft_toupper(str2[2]);
	printf("ft_toupper: %s\n\n", str2);
	return (0);
}
