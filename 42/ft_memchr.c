/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:19:30 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/07 19:19:31 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	scans the initial n bytes of the memory area s to the first instance of c;
*/
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *src;

	i = 0;
	src = (unsigned char *)s;
	while (i < n && src[i])
	{
		if (src[i] == c)
			return((unsigned char *)s + i);
		i++;
	}
}

/* int	main(void)
{
	const char *str = "Help me pls!\0";

	char c = 'm';

	size_t n = 13;

	printf(ft_memchr(str, c, n));
	return (0);
}
 */
