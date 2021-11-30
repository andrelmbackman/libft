/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 11:39:25 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[40] = "Hello World!";
	char	str2[] = "... Goodbye World!";
	printf("Str1: %s\nStr2: %s\n", str1, str2);
	ft_strcat(str1, str2);
	printf("after ft_strcat:\nStr1: %s\n", str1);
	return (0);
}
