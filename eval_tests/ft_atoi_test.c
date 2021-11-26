/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/26 12:16:09 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[] = "Vote for Pedro";
	char	str2[] = " + 42000000 ";
	char	str3[] = "  \t\v-666";
	char	str4[] = "\t\n\v +0000010760000 ++";
	char	str5[] = "2147483647";
	char	str6[] = " -2147483648";
	int		i1 = atoi(str1);
	int		i2 = atoi(str2);
	int		i3 = atoi(str3);
	int		i4 = atoi(str4);
	int		i5 = atoi(str5);
	int		i6 = atoi(str6);
	int		i7 = atoi("999999999999999999");
	printf("atoi:    %i, %i, %i, %i, %i, %i, %i\n\n", i7, i1, i2, i3, i4, i5, i6);
	i1 = ft_atoi(str1);
	i2 = ft_atoi(str2);
	i3 = ft_atoi(str3);
	i4 = ft_atoi(str4);
	i5 = ft_atoi(str5);
	i6 = ft_atoi(str6);
	i7 = ft_atoi("999999999999999999");
	printf("ft_atoi: %i, %i, %i, %i, %i, %i, %i\n\n", i7, i1, i2, i3, i4, i5, i6);
	return (0);
}
