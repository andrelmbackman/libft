/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/10 12:07:11 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[20] = "ABCDEFGH";
	char	str2[11] = "1234567890";
	char	str3[20] = "ABCDEA";
	int		i;

	i = ft_memcmp(str1, str3, 5);
	printf("ft_memcmp: the difference between %s & %s is %i\n", str1, str3, i);
	i = memcmp(str1, str3, 5);
	printf("Memcmp:    the difference between %s & %s is %i\n\n", str1, str3, i);

	i = ft_memcmp(str1, str2, 5);
	printf("ft_memcmp: the difference between %s & %s is %i\n", str1, str2, i);
	i = memcmp(str1, str2, 5);
	printf("Memcmp:    the difference between %s & %s is %i\n\n", str1, str2, i);

	i = ft_memcmp(str2, str3, 5);
	printf("ft_memcmp: the difference between %s & %s is %i\n", str2, str3, i);
	i = memcmp(str2, str3, 5);
	printf("Memcmp:    the difference between %s & %s is %i\n\n", str2, str3, i);
	return (0);
}
