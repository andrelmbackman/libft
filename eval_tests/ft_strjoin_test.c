/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/26 13:39:35 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[] = "The awareness ";
	char	str2[] = "is fading";
	char	*str3;
	int		passed;

	passed = 0;
	str3 = ft_strjoin(str1, str2);
	if (strcmp(str3, "The awareness is fading") == 0)
		passed++;
	else
		printf("\nERROR: %s != \"The awareness is fading\"\n", str3);

	free(str3);
	str3 = ft_strjoin(str1, NULL);
	if (str3 == NULL)
		passed++;
	else
		printf("\nERROR: %s != NULL\n", str3);
	
	free(str3);

	str3 = ft_strjoin(NULL, str1);
	if (str3 == NULL)
		passed++;
	else
		printf("\nERROR: %s != NULL\n", str3);
	
	free(str3);
	
	if (passed == 3)
		printf("\nft_strjoin: OK");
	return (0);
}
