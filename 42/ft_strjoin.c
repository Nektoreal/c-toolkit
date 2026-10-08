/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:37:19 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/08 17:41:31 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *
 */
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	size;

	size = fr_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	//copy all to one str
	//maybe use just strcpy or samething similar
	str[size + 1] = '\0';
	return (str);
}
