/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/30 13:05:08 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	buf2[] = "ozarabozaraboze123";
	int		tests_passed = 0;
	char *str = "find the needlneedle needle in the haystack";

	char *p1 = ft_strnstr(str, "needle", 20);
	char *p2 = strnstr(str, "needle", 20);

	printf("\n* * * ft_strnstr * * *\n");
	if (strcmp(ft_strnstr(buf2, "ozaraboze", 15), strnstr(buf2, "ozaraboze", 15)) == 0)
		tests_passed++;
	else
		printf("Haystack: \"%s\"\nNeedle: \"ozaraboze\"\nShould be:\"%s\"\n is:      \"%s\"\n\n", buf2, strnstr(buf2, "ozaraboze", 15), ft_strnstr(buf2, "ozaraboze", 15));

	 if (strcmp(p1, p2) == 0)
		tests_passed++;
	else
		printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);

	p1 = ft_strnstr(str, "needle", 19);
	p2 = strnstr(str, "needle", 19);
	if (p1 == p2)
		tests_passed++;
	else
		printf("\nERROR: p1 != p2\n%s\n%s\n", p1, p2);

	p1 = ft_strnstr(str, "", 20);
	p2 = strnstr(str, "", 20);
	if (strcmp(p1, p2) == 0)
		tests_passed++;
	else
		printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);

	str = "need the /0 needle!";
	p1 = ft_strnstr(str, "needle", 19);
	p2 = strnstr(str, "needle", 19);
	if (p1 == p2)
		tests_passed++;
	else
		ft_putstr("ERROR: p1 != p2 (after null)");

	if (tests_passed == 5)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}
