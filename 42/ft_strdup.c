/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:13:18 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:03:48 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	returns a pointer to a new string which is a duplicate of the string s.
	memory for the new string is obstained with malloc and can be freed
*/
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, size + 1);
	return (str);
}

/* int	main(void)
{
	const char *str = "abc";
	char *dst = ft_strdup(str);
	printf("string : %s\n", dst);
	return (0);
} */
