/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:24:36 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/06 16:45:34 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
    check if is equivalent to isalpha or isidigit
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
