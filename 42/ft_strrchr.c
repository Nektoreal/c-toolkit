/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:14:30 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:09:10 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	returns a pointer to the last occurrence of the char c in string s
*/
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	last_char;
	int	i;

	i = 0;
	last_char = -1;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
		{
			last_char = i;
		}
		i++;
	}
	if (last_char == -1)
		return (NULL);
	if ((unsigned char) c == '\0')
		return ((char *) s + i);
	return ((char *) s + last_char);
}

/* int	main(void)
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char s3[] = "";

	if (ft_strrchr(s, 't') == s)
		printf("good");
	else
		printf("bad");
	printf("%s", ft_strrchr(s, 't'));
	return (0);
}
 */
