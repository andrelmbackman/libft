
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_f2(t_list *elem)
{
	t_list *new = ft_lstnew(elem->content, elem->content_size);
	if (new != NULL)
		new->content_size++;
	return (new);
}

int	main(void)
{
	int 	tests_passed = 0;

	int		content[] = {1, 2, 3, 4, 5};
	t_list	*first = ft_lstnew(content, sizeof(int)*5);
	t_list	*second = ft_lstnew("42", sizeof(char)*3);
	t_list	*last = ft_lstnew("", 1);

	first->next = second;
	second->next = last;

	t_list *new = ft_lstmap(first, ft_f2);

	if (new->content_size == sizeof(content) + 1)
		tests_passed++;
	else
		printf("\nERROR: first->content_size != sizeof(content) + 1\n");

	if (new->next->content_size == sizeof(char)*3 + 1)
		tests_passed++;
	else
		printf("\nERROR: second->content_size != sizeof(char)*3 + 1\n");

	if (new->next->next->content_size == sizeof(char) + 1)
		tests_passed++;
	else
		printf("\nERROR: last->content_size != sizeof(char) + 1\n");

	ft_lstdel(&first, ft_del);
	ft_lstdel(&new, ft_del);

	if (tests_passed == 3)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}