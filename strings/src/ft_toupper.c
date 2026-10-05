/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:49:08 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/02 19:49:08 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Сonverts the letter c to upper case, if possible.
*/
#include "string.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
