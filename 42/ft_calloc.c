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

	sum = n * size;
	if (n == 0 || size == 0)
	{
		ptr = malloc(sizeof(char));
		return (ptr);
	}
	ptr = malloc(sizeof(char) * sum);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memset(ptr, 0, sum);
	return (ptr);
}
/* int	main(void)
{
	char *str;

	str = ft_calloc(2,5);
	if (str == NULL)
		return (1);
	printf("%s", str);
	return (0);
}
 */
