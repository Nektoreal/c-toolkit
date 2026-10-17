/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:15:59 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:29:50 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates (with malloc(3)) and returns a substring
	from the string s.
	The substring begins at index start and is of
	maximum size len.
 */
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	str = malloc(sizeof(char) * len + 1);
	ft_strlcpy(str, s, len);
	str[len + 1] = '\0';
	return (str);
}
