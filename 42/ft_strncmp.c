/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:29:51 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/08 11:29:52 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	1.compares inside two strings only the first n bytes of s1 and s2
	2.comparison is done using unsigned characters
	3.returns an integer that indicating the result of comp.
		3.1 if they are equal
		3.2 negative value if s1 is less than s2
		3.4 a positive value if s1 is greater than s2

*/
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	i;
	int	sum;

	i = 0;
	sum = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	while(i < n && (str1[i] || str2[i]))
	{
		sum += str1[i] - str2[i];
/* 		printf("itter: %d | sum: %d\n", i, sum);
		printf("str1: %c int: %d\n", str1[i], str1[i]);
		printf("str2: %c int: %d\n", str2[i], str2[i]); */
		i++;
	}
	return(sum);
}
/*
int	main(void)
{
	char *s1 = "ABC\0";
	char *s2 = "AB\0";

	int result = ft_strncmp(s1, s2, 4);
	printf("result is : %d\n", result);
} */
