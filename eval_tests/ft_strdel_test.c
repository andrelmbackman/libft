/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/26 12:59:58 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	int tests_passed = 0;

	char *str1 = malloc(sizeof(char) * 10);
	char *str2 = NULL;

	ft_strdel(&str1);
	if  (str1 == NULL)
		tests_passed++;
	else
		printf("\nERROR: str1 != NULL");

	ft_strdel(&str2);
	tests_passed++;

	if (tests_passed == 2)
	{
		printf("\tft_strdel: OK\n");
		return (1);
	}
	return (0);
}
