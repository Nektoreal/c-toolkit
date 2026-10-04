#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_memchr.c\n");
//1
	char *str = "Hello";
	void *result;

	result = ft_memchr(str, 'e', 5);

	if (result == &str[1])
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
//2
	if (ft_memchr(str, 'a', 5) == NULL)
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
//3
	if (ft_memchr(str, 'o', 4) == NULL)
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
	return(failed);
}
