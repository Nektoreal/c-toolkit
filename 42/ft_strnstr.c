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
	while (i < len && big[i])
	{
		if (big[i] == little[j])
		{
			while (little[j] && big[i + j] == little[j])
			{
				j++;
			}
		}
		if (little_len == j)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char *big = "abcdefde\0";
	const char *little = "\0";

	//char *expected;
	char *actual = ft_strnstr(big, little, 5);
	//expected = ft_strnstr(big, little, 5);
	printf("expected : abcdefdede\n");
	printf("actual : %s\n", actual);
} */

