#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_memmove.c\n");
//1
	char str[] = "ABCDE";

	ft_memmove(str + 1, str, 4);
	if (str[0] == 'A' && str[1] == 'A')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed++;
	}
//2
	char str2[] = "ABCDE";

	ft_memmove(str2, str2 + 1, 4);
	if (str2[0] == 'B' && str2[3] == 'E')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed++;
	}
	return (failed);
}
