/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/25 18:11:29 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[30] = "Hello World! Vote for Pedro.";
	char	str3[30] = "Hello World! Vote for Pedro.";
	int		c = 'X';

	printf("\n\nstr1: %s\n\n", str1);
	ft_memset(str1, c, 5 * sizeof(char));
	printf("ft_memset: str1: %s\n\n", str1);

	ft_strcpy(str1, str3);

	printf("str1: %s\n\n", str1);
	memset(str1, c, 5 * sizeof(char));
	printf("memset:    str1: %s\n\n", str1);

	ft_strcpy(str3, str1);
	ft_bzero(str1 + 22, 6);
	printf("ft_bzero: %s\n\n", str1);
	bzero(str3 + 22, 6);
	printf("bzero:    %s\n\n", str3);
	return (0);
}
