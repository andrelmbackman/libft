/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:01:03 by abackman          #+#    #+#             */
/*   Updated: 2021/11/04 17:22:30 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main()
{
	char 	str1[15] = "Hello World.";
	char	*str2 = "Goodbye cruel World.";
	char	str3[21];
	char	str4[21];
	char	str5[15];
	char	str6[40];
	char	str7[40];
	int		n = ft_strlen(str2);
	char	str8[n];
	char	*str9;
	int		i1[4] = {1, 2, 4, 42};
	int		i2[4] = {3, 5, 7, 23};
	int		i3[4];

	printf("\n* * * Memset/bzero/mem.. * * *\n\n");
	printf("str1 says: %s\n", str1);

	memset(str1 + 2, '1', 2*sizeof(char));
	printf("After memset, str1 should say He11o World: %s\n", str1);

	ft_memset(str1 + 2, '7', 2*sizeof(char));
	printf("After ft_memset, str1 should say He77o World: %s\n", str1);

	ft_bzero(&str1[5], 5);
	printf("After ft_bzero, str1 should say He77o: %s\n\n", str1);

	memcpy(str5, str2, 13*sizeof(char));
	printf("Memcpy: %s\n", str5);
	ft_memcpy(str8, str2, 13*sizeof(char));
	printf("ft_memcpy: %s\n", str8);

	memcpy(i3, i1, 4*sizeof(int));
	printf("Memcpy: %i\n", i3[0]);
	ft_memcpy(i3, i2, 4*sizeof(int));
	printf("ft_memcpy: %i\n", i3[0]);

	char *p1 = memccpy(str3, str2, 'c', 10);
	char *p2 = &str3[9];
	printf("Memccpy: address: %p = %p string: %s\n", p1, p2, str3);
	p1 = ft_memccpy(str4, str2, 'c', 10);
	p2 = &str4[9];
	printf("ft_memccpy: address: %p = %p string: %s\n\n", p1, p2, str4);
	memmove(str4, str1, 5*sizeof(char));
	printf("Memmove: %s\n", str4);
	ft_memmove(str4, str2, 5*sizeof(char));
	printf("ft_memmove: %s\n\n", str4);

	printf("Memchr: %p\n", memchr(str2, 'o', 20));
	printf("ft_memchr: %p\n\n", ft_memchr(str2, 'o', 20));

	int i = memcmp(str1, str3, 5);
	printf("Memcmp: the difference between %s & %s is %i\n", str1, str3, i);
	i = ft_memcmp(str1, str3, 5);
	printf("ft_memcmp: the difference between %s & %s is %i\n\n", str1, str3, i);

	printf(" * * * Strings * * *\n\n");
	str9 = ft_strdup(str1);
	printf("After ft_strdup, the new string says: %s\n\n", str9);

	strcpy(str3, str1);
	printf("According to strcpy it says: %s\n", str3);
	ft_strcpy(str4, str1);
	printf("According to ft_strcpy, it says: %s\n\n", str4);
	
	strncpy(str6, str2, 40);
	printf("According to strncpy it says: %s\n", str6);
	ft_strncpy(str7, str2, 40);
	printf("According to ft_strncpy, it says: %s\n\n", str7);
	printf("strcat: %s\n", strcat(str6, str1));
	printf("ft_strcat: %s\n\n", ft_strcat(str7, str1));

	char	astr[80] = "Vote for Pedro";
	char	bstr[50] = ".. and all your dreams will come true.\0";
	unsigned long x1 = strlcat(astr, bstr, 39);
	printf("STRLCAT\n\nThe new string says:\n%s\nand the size is: %lu\n", astr, x1);
	char	cstr[80] = "Vote for Pedro";
	char	dstr[50] = ".. and all your dreams will come true.\0";
	x1 = ft_strlcat(cstr, dstr, 39);
	printf("FT_STRLCAT\n\nThe new string says:\n%s\nand the size is: %lu\n\n", cstr, x1);	
	return (0);
}
