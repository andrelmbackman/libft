/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/16 11:51:36 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	int	tests_passed;
	tests_passed = 0;
	if (ft_strnequ("ABC", "abc", 3) == 0)
		tests_passed++;
	if (ft_strnequ("ABC", "ABc", 2) == 1)
		tests_passed++;
	if (ft_strnequ("Vote for Pedro", "Vote for Pedro", 15) == 1)
		tests_passed++;
	if (ft_strnequ("Vote for", "Vote for Pedro", 15) == 0)
		tests_passed++;
	if (ft_strnequ("", "Vote for Pedro", 5) == 0)
		tests_passed++;
	if (ft_strnequ("Vote for P", "Vote for Pedro", 7) == 1)
		tests_passed++;
	if (tests_passed == 6)
	{
		printf("Great success!\n\n");
	}
	else
		printf("Error, check ft_strequ\n\n");
	return (0);
}
