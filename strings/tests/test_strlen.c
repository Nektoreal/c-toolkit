#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;

	INFO("TEST test_strlen.c\n");
	//printf("%zu\n", ft_strlen("test"));
	if (ft_strlen("test") == 4)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: 'test'\n");
		failed = 1;
	}

	//printf("%zu\n", ft_strlen(""));
	if (ft_strlen("") == 0)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: ''\n");
		failed = 1;
	}

	//printf("%zu\n", ft_strlen("a"));
	if (ft_strlen("a") == 1)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: 'a'\n");
		failed = 1;
	}
	//test
	return (failed);
}
