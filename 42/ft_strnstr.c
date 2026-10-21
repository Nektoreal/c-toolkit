/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:20:47 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:08:47 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		//printf("itter : %d\n", i);
		if (big[i] == little[j])
		{
			while (little[j] && (i + j) < len && big[i + j] == little[j])
			{
				//printf("little[j] : %c\n", little[j]);
				j++;
				//printf("j: %d\n", j);
				//printf("i: %d\n", i);
			}
			//printf("j: %d\n", j);
			if (little_len != j)
				j = 0;
		}
		//printf("after j : %d\n", j);
		//printf("after len : %d\n", little_len);
		if (little_len == j)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *big = "abcdefde\0";
	const char *little = "de";

	//char *expected;
	char *actual = ft_strnstr(big, little, 9);
	//expected = ft_strnstr(big, little, 5);
	printf("expected : defde\n");
	printf("actual : %s\n", actual);

	//check(ft_strnstr(haystack, "cd", 8) == NULL); showLeaks();
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

	char *actual = ft_strnstr(haystack, "cd", 8);
	printf("expected : %s\n", NULL);
	printf("actual : %s\n", actual);

	return (0);
}
 */
