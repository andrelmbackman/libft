/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/08 16:03:34 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str1[30] = "Hello World! Vote for Pedro.";
	char	str2[] = "Pedro";
	char	str3[] = "Juan";
	char	str4[] = "Juan";
	int		i;

	i = strcmp(str1, str2);
	printf("strcmp:    The difference between %s and %s is %i\n\n", str1, str2, i);
	i = ft_strcmp(str1, str2);
	printf("ft_strcmp: The difference between %s and %s is %i\n\n", str1, str2, i);

	i = strcmp(str2, str3);
	printf("strcmp:    The difference between %s and %s is %i\n\n", str2, str3, i);
	i = ft_strcmp(str2, str3);
	printf("ft_strcmp: The difference between %s and %s is %i\n\n", str2, str3, i);

	i = strcmp(str3, str4);
	printf("strcmp:    The difference between %s and %s is %i\n\n", str3, str4, i);
	i = ft_strcmp(str3, str4);
	printf("ft_strcmp: The difference between %s and %s is %i\n\n", str3, str4, i);

	return (0);
}
