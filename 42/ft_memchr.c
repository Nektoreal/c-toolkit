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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char *src;

	i = 0;
	src = (const char *)s;
	while (i < n && src[i])
	{
		if (src[i] == c)
			return(s + i);
	}
}
