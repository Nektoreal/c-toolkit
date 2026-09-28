#include <stdio.h>
#include "strings.h"

int	main(void)
{
	int	failed;

	failed = 0;
	printf("%zu\n", ft_strlen("test"));
	if (ft_strlen("test") == 4)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}

	printf("%zu\n", ft_strlen(""));
	if (ft_strlen("") == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}

	printf("%zu\n", ft_strlen("a"));
	if (ft_strlen("a") == 1)
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
