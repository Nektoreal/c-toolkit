/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:00:12 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/05 16:01:45 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Checks the length of the string up to the null character (\0)
	and returns the length as a size_t.
*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
