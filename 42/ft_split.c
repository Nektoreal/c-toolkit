/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 19:03:59 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 14:43:46 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*/
#include "libft.h"

static size_t	count_w(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c)
			flag = 1;
		if (s[i] == c && flag == 1)
		{
			count++;
			flag = 0;
		}
		i++;
	}
	if (flag == 1)
		count++;
	return (count);
}

static char	**free_split(char **result, size_t count)
{
	while (count > 0)
	{
		count--;
		free(result[count]);
	}
	free(result);
	return (NULL);
}

static	char	*make_word(char const *s, char c)
{
	char	*result;
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s, len);
	result[len] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_i;

	result = malloc(sizeof(char *) * (count_w(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	word_i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		result[word_i] = make_word(s + i, c);
		if (!result[word_i])
			return (free_split(result, word_i));
		i += ft_strlen(result[word_i]);
		word_i++;
	}
	result[word_i] = NULL;
	return (result);
}
