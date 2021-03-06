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

	ft_lstadd(&first, second);
	ft_lstadd(&first, last);

	if (first->content_size == 1)
		tests_passed++;
	else
		printf("\nERROR: first->content_size != 1");

	if (first->next->content_size == 3)
		tests_passed++;
	else
		printf("\nERROR: first->next->content_size != 3");

	if (first->next->next->content_size == sizeof(int)*5)
		tests_passed++;
	else
		printf("\nERROR: first->next->next->content_size != sizeof(int)*5");

	ft_lstdel(&first, ft_del);

	if (tests_passed == 3)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}