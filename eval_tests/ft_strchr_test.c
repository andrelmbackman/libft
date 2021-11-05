/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 13:47:34 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[20] = "Hello World!";
	char	c;

	c = '\0';
	printf("strchr: the address of '%c' in %s is %p\n", c, str1, strchr(str1, c));
	printf("ft_strchr: the address of '%c' in %s is %p\n", c, str1, ft_strchr(str1, c));
	return (0);
}
