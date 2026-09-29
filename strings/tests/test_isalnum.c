#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_isalnum.c\n");
	//printf("%d\n", ft_isalnum('a'));
	if (ft_isalnum('a') == 1)
	{
		SUCCESS("OK\n");
	}
	else
	{
		ERROR("ERROR: 'a'\n");
		failed = 1;
	}

	//printf("%d\n", ft_isalnum('A'));
	if (ft_isalnum('A') == 1)
	{
		SUCCESS("OK\n");
	}
	else
	{
		ERROR("ERROR: 'A'\n");
		failed = 1;
	}

	//printf("%d\n", ft_isalnum('1'));
	if (ft_isalnum('1') == 1)
	{
		SUCCESS("OK\n");
	}
	else
	{
		ERROR("ERROR: '1'\n");
		failed = 1;
	}
	return(failed);
}
