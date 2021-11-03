/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:01:03 by abackman          #+#    #+#             */
/*   Updated: 2021/11/03 17:28:06 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main()
{
	char 	str1[] = "Hello World.";
	char	*str2 = "Goodbye cruel World.";
	char	str3[21];
	char	str4[21];
	char	str5[15];
	char	str6[40];
	char	str7[40];
	int		n = ft_strlen(str2);
	char	str8[n];
	char	*str9;
	

	printf("* * * Memset/bzero/mem.. * * *\n\n");
	printf("str1 says: %s\n", str1);

	memset(str1 + 2, '1', 2*sizeof(char));
	printf("After memset, str1 should say He11o World: %s\n", str1);

	ft_memset(str1 + 2, '7', 2*sizeof(char));
	printf("After ft_memset, str1 should say He77o World: %s\n", str1);

	ft_bzero(&str1[5], 5);
	printf("After ft_bzero, str1 should say He77o: %s\n", str1);

	memcpy(str5, str2, 13*sizeof(char));
	printf("Memcpy: %s\n", str5);
	ft_memcpy(str8, str2, 13*sizeof(char));
	printf("ft_memcpy: %s\n", str8);


	str9 = ft_strdup(str1);
	printf("After ft_strdup, the new string says: %s\n\n", str9);

	strcpy(str3, str2);
	printf("According to strcpy it says: %s\n", str3);
	ft_strcpy(str4, str2);
	printf("According to ft_strcpy, it says: %s\n\n", str4);
	
	strncpy(str6, str2, 8);
	printf("According to strncpy it says: %s\n", str6);
	ft_strncpy(str7, str2, 8);
	printf("According to ft_strncpy, it says: %s\n\n", str7);	

	return (0);
}
