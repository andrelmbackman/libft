/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/08 16:18:00 by abackman         ###   ########.fr       */
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

	i = strncmp(str1, str2, 5);
	printf("strncmp:    The difference between %s and %s is %i\n\n", str1, str2, i);
	i = ft_strncmp(str1, str2, 5);
	printf("ft_strncmp: The difference between %s and %s is %i\n\n", str1, str2, i);

	i = strncmp(str1, str2, 27);
	printf("strncmp:    The difference between %s and %s is %i\n\n", str1, str2, i);
	i = ft_strncmp(str1, str2, 27);
	printf("ft_strncmp: The difference between %s and %s is %i\n\n", str1, str2, i);

	i = strncmp(str3, str4, 4);
	printf("strncmp:    The difference between %s and %s is %i\n\n", str3, str4, i);
	i = ft_strncmp(str3, str4, 4);
	printf("ft_strncmp: The difference between %s and %s is %i\n\n", str3, str4, i);
	return (0);
}
