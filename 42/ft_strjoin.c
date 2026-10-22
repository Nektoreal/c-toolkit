/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:37:19 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:05:05 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates (with malloc(3)) and returns a new string,
	which is the result of the concatenation of s1 and
	s2.
*/
//copy all to one str
//maybe use just strcpy or samething similar
//f maybe strlcat need to check
#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * size + 1);
	ft_memset(str, '\0', size + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcat(str, s1, size + 1);
	ft_strlcat(str, s2, size + 1);
	return (str);
}

/* int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "World";
	char *str;

	str = ft_strjoin("tripouille", "42");
	printf("str : %s\n", str);
}
 */
