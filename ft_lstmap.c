/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:38:29 by abackman          #+#    #+#             */
/*   Updated: 2021/11/25 14:47:57 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!tmp)
		return (NULL);
	head = tmp;
	while (lst->next != NULL)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (!tmp)
		{
			free(tmp);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (head);
}
