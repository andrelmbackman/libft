#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int 	tests_passed = 0;

	int		content[] = {1, 2, 3, 4, 5};
	t_list	*first = ft_lstnew(content, sizeof(int)*5);
	t_list	*second = ft_lstnew("42", sizeof(char)*3);
	t_list	*last = ft_lstnew("", 1);

	first->next = second;
	second->next = last;

	ft_lstdel(&first, ft_del);

	if (first == NULL)
		tests_passed++;
	else
		printf("\nERROR: first != NULL");

	if (tests_passed == 1)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}