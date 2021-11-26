/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/26 11:59:51 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[20] = "Hello World!";
	char	c;
	char	ch;

	c = 'o';
	ch = 'i';
	printf("strrchr:    the address of '%c' in %s is %p\n", ch, str1, strrchr(str1, ch));
	printf("ft_strrchr: the address of '%c' in %s is %p\n", ch, str1, ft_strrchr(str1, ch));
	printf("strrchr:    the address of '%c' in %s is %p\n", c, str1, strrchr(str1, c));
	printf("ft_strrchr: the address of '%c' in %s is %p\n", c, str1, ft_strrchr(str1, c));
	return (0);
}
