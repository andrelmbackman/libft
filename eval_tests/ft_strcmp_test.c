/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/24 17:25:02 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{

	int		i;
	char	str1[] = "gbz";
	char	str2[] = "abz";
	char	str3[] = "DBC";
	char	str4[] = "ABC";
	char	str5[] = "142";
	char	str6[] = "192"; 
	char	str7[] = "test\200"; 
	char	str8[] = "test\0"; 

	i = strcmp(str1, str2);
	printf("strcmp:    \"gbz\" & \"abz\" %i\n", i);
	i = ft_strcmp(str1, str2);
	printf("ft_strcmp: \"gbz\" & \"abz\" %i\n\n", i);

	i = strcmp("ABC", "ABC");
	printf("strcmp:    \"ABC\" & \"ABC\" %i\n", i);
	i = ft_strcmp("ABC", "ABC");
	printf("ft_strcmp: \"ABC\" & \"ABC\" %i\n\n", i);

	i = strcmp(str3, str4);
	printf("strcmp:    \"DBC\" & \"ABC\" %i\n", i);
	i = ft_strcmp(str3, str4);
	printf("ft_strcmp: \"DBC\" & \"ABC\" %i\n\n", i);

	i = strcmp(str5, str6);
	printf("strcmp:    \"142\" & \"192\" %i\n", i);
	i = ft_strcmp(str5, str6);
	printf("ft_strcmp: \"142\" & \"192\" %i\n\n", i);

	i = strcmp(str7, str8);
	printf("strcmp    unsigned char: %i\n", i);
	i = ft_strcmp(str7, str8);
	printf("ft_strcmp unsigned char: %i\n\n", i);
	return (0);
}
