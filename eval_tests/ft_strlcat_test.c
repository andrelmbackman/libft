/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/11 18:40:46 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
    int tests_passed = 0;

    char *s1 = malloc(sizeof(char) * 20);
    char *s2 = malloc(sizeof(char) * 20);
    char *src = " and this last";

    s1[0] = '\0';
    s2[0] = '\0';

    size_t ret1 = ft_strlcat(s1, "this first", 20);
    size_t ret2 = strlcat(s2, "this first", 20);

    if (ret1 == ret2)
        tests_passed++;
    else
        printf("ERROR: ret1 != ret2\n%zu\n%zu\n", ret1, ret2);

    if (strcmp(s1, s2) == 0)
        tests_passed++;
    else
        printf("ERROR: strcmp(s1, s2) != 0\n%s\n%s\n", s1, s2);

    ret1 = ft_strlcat(s1, src, 20);
    ret2 = strlcat(s2, src, 20);
    if (ret1 == ret2)
        tests_passed++;
    else
        printf("ERROR: ret1 != ret2\n%zu\n%zu\n", ret1, ret2);

    if (strcmp(s1, s2) == 0)
        tests_passed++;
    else
        printf("ERROR: strcmp(s1, s2) != 0\n%s\n%s\n", s1, s2);

    ret1 = ft_strlcat(s1, src, 5);
    ret2 = ft_strlcat(s2, src, 5);

    if (ret1 == ret2)
        tests_passed++;
    else
        printf("ERROR: ret1 != ret2\n%zu\n%zu\n", ret1, ret2);

    free(s1);
    free(s2);
    if (tests_passed == 5)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}
