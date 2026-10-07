/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:35:11 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/06 16:47:33 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Checks whether the char is a letter, including uppercase letters.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
