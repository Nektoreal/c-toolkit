#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_isprint.c\n");
	if (ft_isprint('A'))
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: 'A'\n");
		failed = 1;
	}
	if (ft_isprint('a'))
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: 'a'\n");
		failed = 1;
	}

	if (ft_isprint('1'))
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '1'\n");
		failed = 1;
	}
	if (ft_isprint('@'))
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '@'\n");
		failed = 1;
	}
	if (ft_isprint('/'))
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '/'\n");
		failed = 1;
	}
	if (ft_isprint('\\'))
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '\\'\n");
		failed = 1;
	}
	if (ft_isprint(' '))
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: ' '\n");
		failed = 1;
	}
	return(failed);
}
