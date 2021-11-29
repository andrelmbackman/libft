/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/15 16:54:43 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	char	ft_uppercase(unsigned int i, char c)
{
	if ((i % 2 == 0) && (c > '@' && c < '['))
		c += 32;
	return (c);
}

int	main()
{
	int tests_passed = 0;

	char *str1 = malloc(sizeof(char) * 10);
	char *str2 = malloc(sizeof(char) * 10);
	char *str3 = malloc(sizeof(char) * 10);
	str1 = strcpy(str1, "ABCDEFG&I");
	str2 = strcpy(str2, "aBcDeFg&i");
	str3 = strcpy(str3, "\0\0\0\0\0\0\0\0\0\0\0");

	char (*f)(unsigned int, char) = ft_uppercase;

	str3 = ft_strmapi(str1, f);

	if (strcmp(str2, str3) == 0)
		tests_passed++;
	else
		printf("\nERROR: strcmp(str2, str3) != 0\n%s\n%s\n%s\n", str1, str2, str3);

	if (tests_passed == 1)
	{
		printf("\tOK\n%s\n%s\n%s\n", str1, str2, str3);
		return (1);
	}
	free(str1);
	free(str2);
	free(str3);
	return (0);
}
