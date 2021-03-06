
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	ft_del1(void *content, size_t size)
{
	if (size != 0)
		free(content);
}

int	main(void)
{
	int 	tests_passed = 0;

	int		content[] = {1, 2, 3, 4, 5};
	t_list	*new = ft_lstnew(content, sizeof(int)*5);
	t_list	*next = ft_lstnew("42", sizeof(char)*3);

	new->next = next;

	ft_lstdelone(&new, ft_del1);

	if (new == NULL)
		tests_passed++;
	else
		printf("\nERROR: new != NULL\n");
	
	if (next != NULL)
		tests_passed++;
	else
		printf("\nERROR: next == NULL\n");

	ft_lstdelone(&next, ft_del1);

	if (next == NULL)
		tests_passed++;
	else
		printf("\nERROR: next != NULL\n");

	new = ft_lstnew("", 0);
	ft_lstdelone(&new, ft_del1);

	if (new == NULL)
		tests_passed++;
	else
		printf("\nERROR: new != NULL\n");

	if (tests_passed == 4)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}