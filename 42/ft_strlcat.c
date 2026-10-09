/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:03:14 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/07 18:03:16 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

*/
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;


	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	/* printf("%d\n", d_len);
	printf("%d\n", s_len); */
	i = 0;
	j = d_len;
	if (size == 0 || d_len < size)
		return(s_len);
	while (i < s_len + d_len && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[d_len + s_len] = '\0';
	return (d_len + s_len);
}
/*
int	main(void)
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
}
 */
