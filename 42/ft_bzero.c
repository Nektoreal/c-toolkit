/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:43:51 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/07 15:43:52 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	zero a byte string
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
