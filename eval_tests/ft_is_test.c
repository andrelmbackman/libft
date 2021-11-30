/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:21:33 by abackman          #+#    #+#             */
/*   Updated: 2021/11/10 16:44:14 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char	c1 = 'a';
	char	c2 = 'A';
	char	c3 = '~';
	char	c4 = ' ';
	int		c6 = 125;
	int		c8 = 130;
	char	c7 = '9';


	printf("\n * * * isalpha * * *\n 1 = true, 0 = false\n\n");
	printf("isalpha:    %c is %i\n", c1, isalpha(c1));
	printf("ft_isalpha: %c is %i\n", c1, ft_isalpha(c1));
	printf("isalpha:    %c is %i\n", c3, isalpha(c3));
	printf("ft_isalpha: %c is %i\n\n", c3, ft_isalpha(c3));

	printf(" * * * isdigit * * *\n 1 = true, 0 = false\n\n");
	printf("isdigit:    %c is %i\n", c1, isdigit(c1));
	printf("ft_isdigit: %c is %i\n", c1, ft_isdigit(c1));
	printf("isdigit:    %c is %i\n", c7, isdigit(c7));
	printf("ft_isdigit: %c is %i\n\n", c7, ft_isdigit(c7));

	printf(" * * * isalnum * * *\n 1 = true, 0 = false\n\n");
	printf("isalnum:    %c is %i\n", c1, isalnum(c1));
	printf("ft_isalnum: %c is %i\n", c1, ft_isalnum(c1));
	printf("isalnum:    %c is %i\n", c7, isalnum(c7));
	printf("ft_isalnum: %c is %i\n", c7, ft_isalnum(c7));
	printf("isalnum:    %c is %i\n", c3, isalnum(c3));
	printf("ft_isalnum: %c is %i\n\n", c3, ft_isalnum(c3));

	printf(" * * * isascii * * *\n 1 = ascii, 0 = not ascii\n\n");
	printf("isascii:    %c is %i\n", c1, isascii(c1));
	printf("ft_isascii: %c is %i\n", c1, ft_isascii(c1));
	printf("isascii:    %c is %i\n", c6, isascii(c6));
	printf("ft_isascii: %c is %i\n", c6, ft_isascii(c6));
	printf("isascii:    %c is %i\n", c3, isascii(c3));
	printf("ft_isascii: %c is %i\n", c3, ft_isascii(c3));
	printf("isascii:    \'%c\' is %i\n", c4, isascii(c4));
	printf("ft_isascii: \'%c\' is %i\n", c4, ft_isascii(c4));
	printf("isascii:    %c is %i\n", c8, isascii(c8));
	printf("ft_isascii: %c is %i\n\n", c8, ft_isascii(c8));

	printf(" * * * isprint * * *\n 1 = true, 0 = false\n\n");
	printf("isprint:    %c is %i\n", c2, isprint(c2));
	printf("ft_isprint: %c is %i\n", c2, ft_isprint(c2));
	printf("isprint:    %c is %i\n", c3, isprint(c3));
	printf("ft_isprint: %c is %i\n", c3, ft_isprint(c3));
	printf("isprint:    %c is %i\n", c8, isprint(c8));
	printf("ft_isprint: %c is %i\n", c8, ft_isprint(c8));
		return (0);
}
