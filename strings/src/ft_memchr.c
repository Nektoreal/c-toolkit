/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:09:56 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/04 19:09:56 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	scans the initial n bytes of the memory area
	pointed to by s for the first instance of c.
*/
#include "string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src = (const unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
// s + i the same line 27