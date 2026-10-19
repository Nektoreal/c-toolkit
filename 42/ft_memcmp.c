/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:02:30 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:02:19 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	compares the first n bytes
	(each interreted as unsigned char) of memareas s1 and s2
*/
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				sum;
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	sum = 0;
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (str1[i] || str2[i]))
	{
		sum += str1[i] - str2[i];
		i++;
	}
	return (sum);
}
