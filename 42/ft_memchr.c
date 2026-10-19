/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:19:30 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:01:29 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	scans the initial n bytes of the memory area s to the first instance of c;
*/
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	printf("src: %s\n", src);
	while (src[i] && i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	/* const char *str = "Help me pls!\0";

	char c = 'H';

	size_t n = 1;

	printf(ft_memchr(str, c, n)); */

	const char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf(ft_memchr(s, 1, 2));
	if (ft_memchr(s, 1, 2) == NULL)
		printf("Wow! Hier is...nothing?\n");
		if (s[0] == 0)
		{
			printf("True\n");
			printf("%d\n", *(s + 0));
		}else{
			printf("False\n");
		}
	return (0);
}
