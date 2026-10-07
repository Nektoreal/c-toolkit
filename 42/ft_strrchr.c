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

char	*ft_strrchr(const char *s, int c)
{
	int	last_char;
	int	i;

	i = 0;
	last_char = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			last_char = i;
		}
		i++;
	}
	if (c == '\0')
		return (s + i);
	if (last_char == 0)
		return (NULL);
	return (s + last_char);
}
