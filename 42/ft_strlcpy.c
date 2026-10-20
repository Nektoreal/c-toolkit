/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:17:14 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 12:33:11 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Checks the length of the string up to the null character (\0)
	and returns the length as a size_t.
*/

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/* int	main(void)
{
	//char	dst[10];

	//ft_strlcpy(dst, "abc", 10);
	//printf("dst = [%s]\n", dst);
	//printf("len = %zu\n", ft_strlen(dst));
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);
	//ft_strlcpy(dest, src, 2);
	//printf("len of src: %d || dest[0]: %c\n", ft_strlcpy(dest, src, 1), dest[0]);
	//printf("to compare: %d || dest[0]: %c\n", strlen(src), dest[0]);
	printf("%c\n", dest[strlen(src) + 1]);
	printf("%d == %d\n", ft_strlcpy(dest, src, -1), strlen(src));
	printf("%d\n",strcmp(src, dest));
	if (!strcmp(src, dest))
		printf("Not a problem\n");
	else	printf("problem\n");
	if (ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A')
		printf("it's ok\n");
	else
		printf("fucked up\n");
	return (0);
} */
