/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/15 17:39:32 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	int	tests_passed;
	tests_passed = 0;
	if (ft_strequ("ABC", "abc") == 0)
		tests_passed++;
	if (ft_strequ("Vote for Pedro", "Vote for Pedro") == 1)
		tests_passed++;
	if (ft_strequ("Vote for", "Vote for Pedro") == 0)
		tests_passed++;
	if (ft_strequ("", "Vote for Pedro") == 0)
		tests_passed++;	
	if (tests_passed == 4)
		printf("Great success!\n\n");
	else
		printf("Error, check ft_strequ\n\n");
	return (0);
}
