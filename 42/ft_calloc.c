/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:04:34 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:24:56 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	allocates size bytes and returns a pointer to the allocated memory.
	if size is 0, unique pointer value that can be free
*/
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	size_t	sum;

	//printf("n : %d || size : %zu\n", (int)n, size);
	if ((int)n <= 0 || (int)size <= 0)
	{
		//printf("TRAP to 0\n");
		if (n == 0 || size == 0)
		{
			ptr = malloc(sizeof(char));
			if (ptr == NULL)
				return (NULL);
			return (ptr);
		}
		else
		//printf("TRAP to NULL ret\n");
			return (NULL);
	}
	//printf("TRAP to CONT\n");
	if ((size > 1073741823 && n > 2) || (n > 1073741823 && size > 2))
		return (NULL);
	//printf("TRAP to CONT after int max\n");
	sum = n * size;
	//printf("sum : %d\n", sum);
	ptr = malloc(sizeof(char) * sum);
	if (ptr == NULL)
	{
		//printf("ret null\n");
		return (NULL);
	}
	ptr = ft_memset(ptr, 0, sum);
	//printf("ptr = %s\n", ptr);
	return (ptr);
}
/* int	main(void)
{
	char *str;

	str = ft_calloc(2,2);
	if (str == NULL)
	{
		printf("NULL\n");
		return (1);
	}
	printf("str = %s\n", str);
	return (0);
} */
