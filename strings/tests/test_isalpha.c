#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_isalpha.c\n");
	//printf("%zu\n", ft_isalpha('A'));
	if (ft_isalpha('A') == 1)
	{
		SUCCESS("OK\n");
	}
	else
	{
		ERROR("ERROR: 'A'\n");
		failed = 1;
	}

	//printf("%zu\n", ft_isalpha('a'));
	if (ft_isalpha('a') == 1)
	{
		SUCCESS("OK\n");
	}
	else
	{
		ERROR("ERROR: 'a'\n");
		failed = 1;
	}

	//printf("%zu\n", ft_isalpha(''));
	if (ft_isalpha(' ') == 0)
	{
		SUCCESS("OK\n");
	}
	else
	{
		ERROR("ERROR: ' '\n");
		failed = 1;
	}
	//printf("%zu\n", ft_isalpha('1'));
	if (ft_isalpha('1') == 0)
	{
		SUCCESS("OK\n");
	}
	else
	{
		ERROR("ERROR: '1'\n");
		failed = 1;
	}
	return (failed);
}
