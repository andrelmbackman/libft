/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/05 13:27:32 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[20] = "Hello World!";
	char	c;

	c = '\0';
	printf("strrchr: the address of '%c' in %s is %p\n", c, str1, strrchr(str1, c));
	printf("ft_strrchr: the address of '%c' in %s is %p\n", c, str1, ft_strrchr(str1, c));
	return (0);
}
