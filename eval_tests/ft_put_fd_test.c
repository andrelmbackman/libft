/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/26 13:45:47 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDWR);
		if (fd == -1)
			fd = 1;
	}
	else
		fd = 1;
	ft_putchar_fd('@', fd);
	ft_putstr_fd("\nHello World!\n", fd);
	ft_putendl_fd("Max int:", fd);
	ft_putnbr_fd(2147483647, fd);
	ft_putendl_fd("\nMin int:", fd);
	ft_putnbr_fd(-2147483648, fd);
	ft_putendl_fd("Vote for Pedro", fd);
	ft_putnbr_fd(40000, fd);
	return (0);
	
}
