#include "libft.h"
#include <stdio.h>

static void	print_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		printf("[%d] = \"%s\"\n", i, arr[i]);
		i++;
	}
}

static void	free_test(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	main(void)
{
	char	**result;

	result = ft_split("     ", ' ');
	if (!result)
		return (1);
	print_split(result);
	free_test(result);
	return (0);
}
