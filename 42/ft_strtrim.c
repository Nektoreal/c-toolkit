/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:14:55 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/09 18:15:06 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Allocates (with malloc(3)) and returns a copy of s1
	with the characters specified in set removed from
	the beginning and the end of the string.
*/
int	check_set(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
	}
	return (0);
}

size_t

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	sublen;
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s1);
	j = len - 1;
	i = 0;
	//search for start and end points
	while (s1[i] && check_set(s1[i], set))
		i++;
	while (j > i && check_set(s1[j], set))
		j--;
	sublen = j - i;
	trimmed = (char *)malloc(sizeof(char) * (sublen + 2));//2 cause each string contains \\0?
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, sublen + 1);
	trimmed[sublen + 1] = '\0';
	return(trimmed);
}
