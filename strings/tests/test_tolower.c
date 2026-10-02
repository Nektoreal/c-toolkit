#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_tolower.c\n");
	if (ft_tolower('A') == 'a')
		SUCCESS("OK\n");
	else
		ERROR("ERROR: 'A'\n");

	if (ft_tolower('a') == 'a')
		SUCCESS("OK\n");
	else
		ERROR("ERROR: 'a'\n");

	if (ft_tolower('1') == '1')
		SUCCESS("OK\n");
	else
		ERROR("ERROR: '1'\n");

	if (ft_tolower('@') == '@')
		SUCCESS("OK\n");
	else
		ERROR("ERROR: '@'\n");

	if (ft_tolower('/') == '/')
		SUCCESS("OK\n");
	else
		ERROR("ERROR: '/'\n");

	if (ft_tolower('\\') == '\\')
		SUCCESS("OK\n");
	else
	ERROR("ERROR: '\\'\n");

	if (ft_tolower(' ') == 32)
		SUCCESS("OK\n");
	else
		ERROR("ERROR: ' '\n");

	return(failed);
}
