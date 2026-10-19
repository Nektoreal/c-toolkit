/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:07:31 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/07 19:07:32 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	returns a pointer to the first occurrence of the character c in the string s
*/
#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char *str;

	str = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (str + i);
		i++;
	}
	if (str[i] == c)
		return (str + i);
	return (NULL);
}

/* int	main(void)
{
	char *str = "this is your captain speaking";
	char *c;

	c = ft_strchr(str, 'p');
	printf("char was : 'p'\n");
	printf("orig str: %s\n", str);
	printf("found :%s\n", c);
	return (0);
} */
