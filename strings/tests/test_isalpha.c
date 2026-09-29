#include <stdio.h>
#include "strings.h"

int	main(void)
{
	int	failed;

	failed = 0;
	//printf("%zu\n", ft_isalpha('A'));
	if (ft_isalpha('A') == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}

	//printf("%zu\n", ft_isalpha('a'));
	if (ft_isalpha('a') == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}

	//printf("%zu\n", ft_isalpha(''));
	if (ft_isalpha(' ') == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}
	//printf("%zu\n", ft_isalpha('1'));
	if (ft_isalpha('1') == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}
	return (failed);
}
