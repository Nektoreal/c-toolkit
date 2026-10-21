/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:28:09 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:23:52 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	converts portion of string pointed nptr to int. atoi does not detect errors
	1. check if string starts with '-'
	2. somehow check from wich base convert for atoi its 10 decimal
	3. convert from decimal to char
*/
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	pos;
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	pos = 0;
	/* while (nptr[pos] != '\0')
	{
		if (ft_isprint(nptr[pos]))
		{
			if (nptr[pos] == '-' && ft_isdigit(nptr[pos + 1]))
			{
				pos++;
				sign = -1;
			}
			//printf("TRAP1\n");
			while (ft_isdigit(nptr[pos]))
			{
				num = num * 10 + (nptr[pos] - '0');
				pos++;
			}
			return (num * sign);
		}
		pos++;
	}
	return (sign * num); */
	//!ft_isdigit(nptr[pos]) ||
	//printf("%c\n" ,nptr[pos + 1]);
	while (!ft_isprint(nptr[pos]))
		pos++;
	//printf("%d\n", pos);
	if (nptr[pos] == '-' && ft_isdigit(nptr[pos + 1]))
	{
		sign = -1;
		pos++;
	}
	if (nptr[pos] == '+')
		pos++;
	while (ft_isdigit(nptr[pos]))
	{
		num = num * 10 + (nptr[pos] - '0');
		pos++;
	}
	return (num * sign);
}
/* int	main(void)
{
	//char c[] = "\n\ta4";
	//int char_to_int = c - '0';
	//printf("ctoi: %d\n", char_to_int);

	char escape_with_one[] = {9, 10, 11, 12, 13, '-', 'a' ,'1', 0};
	//const char *nptr = "1";
	int output = ft_atoi(escape_with_one);
	printf("output: %d\n", output);
} */
