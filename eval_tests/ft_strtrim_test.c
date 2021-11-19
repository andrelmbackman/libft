/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/19 13:51:13 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int tests_passed = 0;

	char *str = ft_strtrim(" \n\t \n  \tThe awareness\t \n \t\t  ");
	if (strcmp(str, "The awareness") == 0)
		tests_passed++;
	else
		printf("\nERROR 1: strcmp(str, 'The awareness') != 0\n|%s|", str);
	free(str);

	str = ft_strtrim("is fading");
	if (strcmp(str, "is fading") == 0)
		tests_passed++;
	else
		printf("\nERROR 2: strcmp(str, 'is fading') != 0\n|%s|", str);
	free(str);

	str = ft_strtrim("");
	if (strcmp(str, "") == 0)
		tests_passed++;
	else
		printf("\nERROR 3: strcmp(str, '') != 0\n|%s|", str);
	free(str);

	str = ft_strtrim("\t\n ");
	if (strcmp(str, "") == 0)
		tests_passed++;
	else
		printf("\nERROR 4: strcmp(str, '') != 0\n|%s|", str);
	free(str);

	if (tests_passed == 4)
	{
		printf("\tGreat success!\n");
		return (1);
	}
	return (0);
}
