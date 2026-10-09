/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:14:30 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/07 19:14:32 by okoliada         ###   ########.fr       */
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
	last_char = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
		{
			last_char = i;
		}
		i++;
	}
	if (last_char == 0)
		return NULL;
	if ((unsigned char) c == '\0')
		return ((char *) s + i);
	return ((char *) s + last_char);
}
/*
int	main(void)
{
	const char *str = "I did not hit her. I did not! Oh hi Mark.\0";
	char c = 'c';
	printf("%s\n", ft_strrchr(str, c)?ft_strrchr(str, c):"ERROR! = NULL");
	return (0);
}
 */
