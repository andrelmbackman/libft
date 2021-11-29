

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str1[20] = "ABCDEFGH";
	int		tab1[4] = {42, 32, 22, 12};
	char	str3[20] = "ABCDEFGH";
	char	*p;

	printf("str1: %s\n", str1);
	p = ft_memmove(str1, str1 + 3, 5);
	printf("ft_memmove: str1: %s %p\n\n", str1, p);
	ft_strcpy(str1, str3);
	printf("str1: %s\n", str1);;
	p = memmove(str1, str1 + 3, 5);;
	printf("memmove:    str1: %s %p\n\n", str1, p);


	printf("tab1: %i %i %i %i\n", tab1[0], tab1[1], tab1[2], tab1[3]);
	p = ft_memmove(tab1, tab1 + 2, 2);
	printf("ft_memmove: %i %i %i %i\n%p\n\n", tab1[0], tab1[1], tab1[2], tab1[3], p);
	tab1[0] = 42;
	tab1[1] = 32;
	tab1[2] = 22;
	tab1[3] = 12;
	printf("tab1: %i %i %i %i\n", tab1[0], tab1[1], tab1[2], tab1[3]);
	p = memmove(tab1, tab1 + 2, 2);
	printf("memmove:    %i %i %i %i\n%p\n", tab1[0], tab1[1], tab1[2], tab1[3], p);
	return (0);
}
