/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/16 15:09:24 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int tests_passed = 0;

	char *s1 = "testing this string\0 which continues";
	char *s2 = "testing this string\0 which continues";
	char *s3 = "testing this string ";

	if (ft_memcmp(s1, s2, strlen(s1) + 1) == memcmp(s1, s2, strlen(s1) + 1))
		tests_passed++;
	else
		printf("\nERROR 1: ft_memcmp(s1, ..) != memcmp(s1, ..)\n%d\n%d\n",
		ft_memcmp(s1, s2, strlen(s1) + 1), memcmp(s1, s2, strlen(s1) + 1));

	if (ft_memcmp(s1, s3, strlen(s3)) == memcmp(s1, s3, strlen(s3)))
		tests_passed++;
	else
		printf("\nERROR 2: ft_memcmp(s1, ..) != memcmp(s1, ..)\n%d\n%d\n",
		ft_memcmp(s1, s3, strlen(s3)), memcmp(s1, s3, strlen(s3)));

	if (ft_memcmp(s1, s3, strlen(s3) - 1) == memcmp(s1, s3, strlen(s3) - 1))
		tests_passed++;
	else
		printf("\nERROR 3: ft_memcmp(s1, ..) != memcmp(s1, ..)\n%d\n%d\n",
		ft_memcmp(s1, s3, strlen(s3) - 1), memcmp(s1, s2, strlen(s3) - 1));

	if (ft_memcmp("\0", "\0", 1) == memcmp("\0", "\0", 1))
		tests_passed++;
	else
		printf("\nERROR 4: ft_memcmp('\\0', '\\0', 1) != memcmp('\\0', '\\0', 1)\n%d\n%d\n",
		ft_memcmp("\0", "\0", 1), memcmp("\0", "\0", 1));

	if (ft_memcmp("\0", "\200", 1) < 0 && memcmp("\0", "\200", 1) < 0)
		tests_passed++;
	else
		printf("\nERROR 5: signs differ for ft_memcmp('\\0', '\200', 1) and memcmp('\\0', '\200', 1)\n%d\n%d\n",
		ft_memcmp("\0", "\200", 1), memcmp("\0", "\200", 1));

	if (ft_memcmp("\0", "\200", 0) == memcmp("\0", "\200", 0))
		tests_passed++;
	else
		printf("\nERROR 6: ft_memcmp('\\0', '\200', 0) != memcmp('\\0', '\200', )\n%d\n%d\n",
		ft_memcmp("\0", "\200", 0), memcmp("\0", "\200", 0));

	if (ft_memcmp("a", "A", 2) > 0 && memcmp("a", "A", 2) > 0)
		tests_passed++;
	else
		printf("\nERROR 7: signs differ for ft_memcmp('a', 'A', 2) and memcmp('a', 'A', 1)\n%d\n%d\n",
		ft_memcmp("a", "A", 2), memcmp("a", "A", 2));

	if (ft_memcmp("", "", 1) == memcmp("", "", 1))
		tests_passed++;
	else
		printf("\nERROR 8: ft_memcmp('', '', 1) != memcmp('', '', 1)\n%d\n%d\n",
		ft_memcmp("", "", 1), memcmp("", "", 1));

	int i1[] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
	int i2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	if (ft_memcmp(i1, i2, sizeof(int)*9) == memcmp(i1, i2, sizeof(int)*9))
		tests_passed++;
	else
		printf("\nERROR 9: ft_memcmp(i1, i2, sizeof(int)*9) != memcmp(i1, i2, sizeof(int)*9)\n%d\n%d\n",
		ft_memcmp(i1, i2, sizeof(int)*9), memcmp(i1, i2, sizeof(int)*9));

	if (ft_memcmp(i1, i2, sizeof(int)*10) == memcmp(i1, i2, sizeof(int)*10))
		tests_passed++;
	else
		printf("\nERROR 10: ft_memcmp(i1, i2, sizeof(int)*10) != memcmp(i1, i2, sizeof(int)*10)\n%d\n%d\n",
		ft_memcmp(i1, i2, sizeof(int)*10), memcmp(i1, i2, sizeof(int)*10));

	if (tests_passed == 10)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}
