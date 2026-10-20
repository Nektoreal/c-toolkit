/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:03:14 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:05:53 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	j;
	size_t	i;
	size_t	len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	len = (size - dst_len) + dst_len;
	j = dst_len;
	i = 0;
	if (src_len == 0)
		return (dst_len);
	if (size <= dst_len)
		return (src_len + dst_len);
	while (src[i] && j < size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (src_len + dst_len);
}
/* int	main(void)
{
	char dst[12] = "Hello";
    const char *src = "World";
    size_t dstsize = sizeof(dst);

    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i = 0;

    while (dst_len < dstsize && dst[dst_len] != '\0')
    {
        dst_len++;
    }

    while (src[src_len] != '\0')
    {
        src_len++;
    }

    size_t total_len = dst_len + src_len;

    if (dst_len < dstsize)
    {
        while (src[i] != '\0' && (dst_len + i + 1) < dstsize)
        {
            dst[dst_len + i] = src[i];
            i++;
        }
        dst[dst_len + i] = '\0';
    }

    printf("Result %%s: \"%s\"\n\n", dst);

    for (size_t index = 0; index < dstsize; index++)
    {
        if (dst[index] == '\0')
        {
            printf("[%zu]: '[\\0]' (0)\n", index);
        }
        else
        {
            printf("[%zu]: '%c' (%d)\n", index, dst[index], dst[index]);
        }
    }

    return 0;
} */
