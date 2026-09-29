#include <stdio.h>
#include "strings.h"

int	main(void)
{
	int	failed;

	failed = 0;
	//printf("%d\n", ft_isalnum('a'));
	if (ft_isalnum('a') == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}

	//printf("%d\n", ft_isalnum('A'));
	if (ft_isalnum('A') == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}

	//printf("%d\n", ft_isalnum('1'));
	if (ft_isalnum('1') == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("FAIL\n");
		failed = 1;
	}
	return(failed);
}
