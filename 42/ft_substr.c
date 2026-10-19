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

	str = malloc(sizeof(char) * len + 1);
	ft_strlcpy(str, s + start, len);
	str[len + 1] = '\0';
	return (str);
}

/* int	main(void)
{
	char *str = "Hello cap\0";
	char *substr = ft_substr(str, 3, 9);

	printf("orig srt: %s\n", str);
	printf("substr: %s\n", substr);
	return (0);
} */
