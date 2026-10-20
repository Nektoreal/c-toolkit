/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:29:51 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:07:01 by Nektoreal        ###   ########.fr       */
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
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if ((long)n <= 0)
		return (n);
	while (i < n && str1[i] && (str1[i] == str2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
//printf("str1[i] : %c\n", str1[i]);
//printf("str2[i] : %c\n", str2[i]);
//printf("sum is :%d\n", sum);
/*
int	main(void)
{
	//char *s1 = "ABC\0";
	//char *s2 = "AB\0";

	//int result = ft_strncmp(s1, s2, 4);
	//printf("result is : %d\n", result);
	printf("result : %d\n" ,ft_strncmp("1234", "1235", -1));
	//check(ft_strncmp("Tripouille", "TripouilleX", 42) < 0); showLeaks();
	return (0);
}
*/
