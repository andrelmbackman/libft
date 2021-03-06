#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int tests_passed = 0;

	if (ft_strncmp("hello world \t", "hello world \t", 20) == 0 && strncmp("hello world \t", "hello world \t", 20) == 0)
		tests_passed++;
	else
		printf("\nERROR: ft_strcmp('hello world \t', 'hello world \t', 20) != 0\n");
	
	if (ft_strncmp("\200", "\0", 1) > 0 && strncmp("\200", "\0", 1) > 0)
		tests_passed++;
	else
		printf("\nERROR: ft_strcmp('\200', '\\0', 1) <= 0\n");

	if (ft_strncmp("\200", "\0", 0) == 0 && strncmp("\200", "\0", 0) == 0)
		tests_passed++;
	else
		printf("\nERROR: ft_strcmp('\200', '\\0', 0) != 0\n");

	if (ft_strncmp("", "\0", 1) == 0 && strncmp("", "\0", 1) == 0)
		tests_passed++;
	else
		printf("\nERROR: ft_strcmp('', '\\0', 1) != 0\n");

	if (ft_strncmp("test\0 test", "test", 10) == 0 && strncmp("test\0 test", "test", 10) == 0)
		tests_passed++;
	else
		printf("\nERROR: ft_strcmp('test\\0 test', 'test', 10) != 0\n");

	if (ft_strncmp("abcd", "abcde", 4) == 0 && strncmp("abcd", "abcde", 4) == 0)
		tests_passed++;
	else
		printf("\nERROR: ft_strcmp('abcd', 'abcde', 4) != 0\n");

	if (ft_strncmp("abcd", "abcde", 5) < 0 && strncmp("abcd", "abcde", 5) < 0)
		tests_passed++;
	else
		printf("\nERROR: ft_strcmp('abcd', 'abcde', 5) >= 0\n");

	if (tests_passed == 7)
	{
		printf("\tft_strncmp: OK\n");
		return (1);
	}
	return (0);
}