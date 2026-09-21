/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:52:02 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/09/21 13:52:02 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Sets the first n bytes of memory to zero.
*/
#include "memory.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
