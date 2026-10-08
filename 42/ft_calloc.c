/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:04:34 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/08 15:04:35 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	allocates size bytes and returns a pointer to the allocated memory.
	if size is 0, unique pointer value that can be free
*/
#include <stdlib.h>
#include <string.h>
void	*ft_calloc(size_t n, size_t size)
{
	char *ptr;
	size_t	i;

	i = 0;
	if (n == 0 || size == 0) // create check for max and min
	{
		return NULL;
	}
	ptr = malloc(size * n);
	if (!ptr)
		return NULL;

	ptr = memset(ptr, 0, size * n);
	return (ptr);
}
