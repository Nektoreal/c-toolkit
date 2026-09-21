/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:47:45 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/09/21 12:47:45 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Checks the length of the string up to the null character (\0)
	and returns the length as a size_t.
*/
#include "strings.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}
