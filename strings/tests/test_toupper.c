#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_toupper.c\n");
	if (ft_toupper('A') == 'A')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: 'A'\n");
		failed = 1;
	}

	if (ft_toupper('a') == 'A')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: 'a'\n");
		failed = 1;
	}

	if (ft_toupper('1') == '1')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '1'\n");
		failed = 1;
	}
	if (ft_toupper('@') == '@')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '@'\n");
		failed = 1;
	}

	if (ft_toupper('/') == '/')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '/'\n");
		failed = 1;
	}

	if (ft_toupper('\\') == '\\')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: '\\'\n");
		failed = 1;
	}

	if (ft_toupper(' ') == 32)
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("ERROR: ' '\n");
		failed = 1;
	}
	return(failed);
}
