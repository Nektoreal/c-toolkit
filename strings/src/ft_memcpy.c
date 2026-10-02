/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:07:51 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/02 20:07:51 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	memcpy() copies n bytes from memory area src to memory area dest.
*/
#include "string.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d = (char *) dest;
	const char	*s = (const char *) src;
	size_t	i = 0;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
