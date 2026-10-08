/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:20:47 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/08 12:20:48 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

*/
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i, j;
	int	little_len;

	i = 0;
	j = 0;
	little_len = strlen(little); // edit to ft_strlen.c
	if (little[0] == '\0')
		return (char *) big;
	while (i < len && big[i])
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j])
			{
				j++;
			}
		}
		printf("check j = %d\n", j);
		if (little_len == j)
				return (char *)big + i;
		i++;
	}
	return NULL;
}

int	main(void)
{
	const char *big = "abcdefde\0";
	const char *little = "de\0";

	char *expected;
	char *actual = ft_strnstr(big, little, 5);
	expected = strnstr(big, little, 5);
	printf("expected : %s", expected);
	printf("actual : %s", actual);
}
