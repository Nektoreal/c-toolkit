#include <stdio.h>
#include "strings.h"
#include "../logger.h"

int	main(void)
{
	int	failed;

	failed = 0;
	INFO("TEST test_memcpy.c\n");
//1
	char	*src = "Hello";
	char	dest[3] = {0};

	ft_memcpy(dest, src, 0);
	if (dest[0] == '\0' && dest[1] == '\0' && dest[2] == '\0')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
//2
	ft_memcpy(dest, src, 3);
	if (dest[0] == 'H' && dest[1] == 'e' && dest[2] == 'l')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
//3
	void *result = ft_memcpy(dest, src, 3);
	if (result == dest)
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
//4
	char	dest2[10] = {0};
	dest2[5] = 'X';

	ft_memcpy(dest2, src, 6);
	if (dest2[5] == '\0')
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
//5
	int	src_int[3] = {10, 20, 30};
	int	dest_int[3] = {0};

	ft_memcpy(dest_int, src_int, sizeof(src_int));

	if (dest_int[0] == 10 && dest_int[1] == 20 && dest_int[2] == 30)
		SUCCESS("[ OK ]\n");
	else
	{
		ERROR("[ ERROR ]\n");
		failed = 1;
	}
	return(failed);
}
