/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:51:09 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/07 15:51:24 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	cope src into dst without overlap
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *) dest;
	s = (const char *) src;
	while (i < n && src[i])
	{
		d[i] = src[i];
		i++;
	}
	return (dest);
}
