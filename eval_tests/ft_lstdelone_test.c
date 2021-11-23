/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:32:42 by abackman          #+#    #+#             */
/*   Updated: 2021/11/23 11:54:16 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

static	void	ft_del(void *content, size_t content_size)
{
	if (content_size < 0)
		free(content);
}

int	main(void)
{
	int 	tests_passed = 0;

	int		content[] = {1, 2, 3, 4, 5};
	t_list	*new1 = ft_lstnew(content, sizeof(int)*5);
	t_list	*new2 = ft_lstnew("42", sizeof(char)*3);

	new1->next = new2;

	ft_lstdelone(&new1, ft_del);

	if (new1 == NULL)
		tests_passed++;
	else
		printf("\nERROR: new1 != NULL\n");
	
	if (new2 != NULL)
		tests_passed++;
	else
		printf("\nERROR: new2 == NULL\n");

	ft_lstdelone(&new2, ft_del);

	if (new2 == NULL)
		tests_passed++;
	else
		printf("\nERROR: new2 != NULL\n");

	new1 = ft_lstnew("", 0);
	ft_lstdelone(&new1, ft_del);

	if (new1 == NULL)
		tests_passed++;
	else
		printf("\nERROR: new1 != NULL\n");

	if (tests_passed == 4)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}

