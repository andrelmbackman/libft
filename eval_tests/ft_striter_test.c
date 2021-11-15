/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/15 12:30:47 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	lowercase(char *s)
{
	*s += 32;
}

int     main()
{
	int tests_passed = 0;

	char *str1 = malloc(sizeof(char) * 10);
	char *str2 = malloc(sizeof(char) * 10);
	str1 = strcpy(str1, "ABCDEFGHI");
	str2 = strcpy(str2, "abcdefghi");

	void (*f)(char *) = lowercase;

	ft_striter(str1, f);

	if (strcmp(str1, str2) == 0)
		tests_passed++;
	else
		printf("\nERROR: strcmp(str1, str2) != 0\n%s\n%s", str1, str2);

	if (tests_passed == 1)
	{
		printf("\tOK\n%s\n%s\n", str1, str2);
		return (1);
	}
	free(str1);
	free(str2);
	return (0);
}
