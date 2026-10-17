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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}
/* int	main(void)
{
	char	dst[10];

	ft_strlcpy(dst, "abc", 10);
	printf("dst = [%s]\n", dst);
	printf("len = %zu\n", ft_strlen(dst));
	return (0);
}
 */
