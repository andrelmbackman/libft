/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/26 20:25:50 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = ft_itoa(42);
	int		passed = 0;

	if (strcmp(str, "42") == 0)
		passed++;
	else
	{
		printf("strcmp: %s and 42 != 0", str);
		return (1);
	}
	free(str);

	str = ft_itoa(2147483647);
	if (strcmp(str, "2147483647") == 0)
		passed++;
	else
	{
		printf("strcmp: %s and 2147483647 != 0", str);
		return (1);
	}
	free(str);

	str = ft_itoa(-2147483648);
	if (strcmp(str, "-2147483648") == 0)
		passed++;
	else
	{
		printf("strcmp: %s and -2147483648 != 0", str);
		return (1);
	}

	free(str);

	str = ft_itoa(123);
	if (strcmp(str, "123") == 0)
		passed++;
	else
	{
		printf("strcmp: %s and 123 != 0", str);
		return (1);
	}
	free(str);
	if (passed == 3)
		printf("Great success!\n");
	return (0);
}
