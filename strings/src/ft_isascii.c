/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:24:54 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/09/30 20:24:54 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Checks whether the char is a ASCII.
*/
#include "strings.h"
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return(1);
	return (0);
}
