/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:14:55 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:21:44 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates (with malloc(3)) and returns a copy of s1
	with the characters specified in set removed from
	the beginning and the end of the string.
*/
/* int	check_set(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
	}
	return (0);
} */
static char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

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
	while (s1[i] && check_set(s1[i], set))
		i++;
	if (s1[i] == '\0')
		return (empty_string());
	while (j > i && check_set(s1[j], set))
		j--;
	sublen = j - i + 1;
	trimmed = (char *)malloc(sizeof(char) * (sublen + 1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, sublen);
	trimmed[sublen] = '\0';
	return (trimmed);
}
