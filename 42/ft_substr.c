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
	size_t	src_len;

	src_len = ft_strlen(s);
	if (start > src_len)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (start + len > src_len)
		len = src_len - start;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/* int	main(void)
{
	char *str = "0123456789";
	char *s = ft_substr(str, 9, 10);

	printf("orig srt: %s\n", str);
	printf("substr: %s\n", s);
	return (0);
} */
//start + length > src_len
