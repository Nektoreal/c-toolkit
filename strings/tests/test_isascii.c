#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_isascii.c\n");
	if (ft_isascii(0) == 1)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: '0'\n");
		failed = 1;
	}

	if (ft_isascii(127) == 1)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: '127'\n");
		failed = 1;
	}

	if (ft_isascii('A') == 1)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: 'A'\n");
		failed = 1;
	}

	if (ft_isascii('6') == 1)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: '6'\n");
		failed = 1;
	}
	if (ft_isascii(128) == 0)
	{
		SUCCESS("[ OK ]\n");
	}
	else
	{
		ERROR("ERROR: '128'\n");
		failed = 1;
	}
	return (failed);
}
