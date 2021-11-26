/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/26 13:13:42 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int tests_passed = 0;

	char *str1 = malloc(sizeof(char) * 10);
	char str2[10] = {'\0'};

	for (int i = 0; i < 10; i++)
	{
		str1[i] = 'x';
	}
	ft_strclr(str1);
	if (memcmp(str1, str2, 10) == 0)
		tests_passed++;
	else
		printf("\nERROR: memcmp(str1, str2, 100) != 0");

	free(str1);
	str1 = NULL;

	ft_strclr(str1);
	tests_passed++;

	if (tests_passed == 2)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}
