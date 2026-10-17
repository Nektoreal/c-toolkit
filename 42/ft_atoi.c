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

int	ft_atoi(const char *nptr)
{
	int	pos;
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	pos = 0;
	if (nptr[pos] == '-')
	{
		pos++;
		sign = -1;
	}
	while (nptr[pos])
	{
		num = num * 10 + (nptr[pos] - '0');
		pos++;
	}
	return (num * sign);
}
/* int	main(void)
{
	char c = '5';
	int char_to_int = c - '0';
	printf("%d", char_to_int);

	const char *nptr = "-1234\0";
	int output = ft_atoi(nptr);
	printf("output: %d\n", output);
}
 */
