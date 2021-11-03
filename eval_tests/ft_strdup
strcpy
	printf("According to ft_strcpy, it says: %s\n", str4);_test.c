/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:01:03 by abackman          #+#    #+#             */
/*   Updated: 2021/11/02 17:22:15 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char 	str1[] = "Hello World.";
	char	*str2 = "Goodbye cruel World.";
	char	str3[21];
	char	str4[21];
	char	*str5;

	printf("str1 says: %s\n", str1);
	str5 = ft_strdup(str1);
	printf("The new string now says: %s\n", str5);
	strcpy(str3, str2);
	printf("According to strcpy it says: %s\n", str3);
	ft_strcpy(str4, str2);
	printf("According to ft_strcpy, it says: %s\n", str4);
	return (0);
}
