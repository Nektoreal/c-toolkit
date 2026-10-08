/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:13:18 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/08 16:13:19 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	returns a pointer to a new string which is a duplicate of the string s.
	memory for the new string is obstained with malloc and can be freed
*/
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	str = malloc(sizeof(char) * size + 1);

	if (!ptr)
		return (NULL);
	ft_strlcpy(str, s, size);
	str[size + 1] = '\0';

	return (str);
}
