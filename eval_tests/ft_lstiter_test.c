#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	ft_f1(t_list *elem)
{
	elem->content_size++;
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

	ft_lstiter(first, ft_f1);

	if (first->content_size == sizeof(content) + 1)
		tests_passed++;
	else
		printf("\nERROR: first->content_size != sizeof(content) + 1\n");

	if (second->content_size == sizeof(char)*3 + 1)
		tests_passed++;
	else
		printf("\nERROR: second->content_size != sizeof(char)*3 + 1\n");

	if (last->content_size == sizeof(char) + 1)
		tests_passed++;
	else
		printf("\nERROR: last->content_size != sizeof(char) + 1\n");

	ft_lstdel(&first, ft_del);

	if (tests_passed == 3)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}