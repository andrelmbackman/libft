/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/17 16:49:59 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[] = "xxxHelloxWorldxxVotexxxxforxxPedroxxixi";
	char	**str2;
	int		i;

	str2 = ft_strsplit(str1, 'x');
	i = 0;
	printf("%s\n", str1);
	while (i < 10 && str2[i] != NULL)
	{
		printf(" %s", str2[i]);
		i++;
	}
	return (0);
}
