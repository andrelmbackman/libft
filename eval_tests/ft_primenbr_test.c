#include "libft.h"
#include <stdio.h>

int	main()
{
	int	i = 0;
	while(i++ < 30)
	{
		if (ft_primenbr(i) == 0)
			printf("\n%i is a prime number\n", i);
	}
	return (0);
}
