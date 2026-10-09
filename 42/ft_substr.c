/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 17:15:59 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/08 17:36:52 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Allocates (with malloc(3)) and returns a substring
	from the string s.
	The substring begins at index start and is of
	maximum size len.
 */
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	str = malloc(sizeof(char) * len + 1);
	ft_strlcpy(str, s, len); //need to check if it works with this func
	str[len + 1] = '\0';
	return (str);
}
