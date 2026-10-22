/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 19:04:08 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/17 13:28:30 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	check_size(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*convert_to_str(char *str, long long n, int i)
{
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		//printf("pos : %d\n", i);
		n /= 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long long	n_cpy;

	//printf("n : %d\n", n);
	n_cpy = (long) n;
	if (n_cpy == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	size = check_size(n_cpy);
	//printf("size : %d\n", size); //correct with '-' to
	str = malloc(sizeof(char) * (size + 1));
	str = convert_to_str(str, n_cpy, size - 1);
	//printf("str : %s\n", str);
	str[size] = '\0';
	//printf("str : %s\n", str);
	return (str);
}

/* int	main(void)
{
	int n = 2;
	char *str = ft_itoa(n);

	//printf("str = %s\n", str);
	return (0);
} */
/*
	char	*str;
	int		number_size;
	size_t	size;
	int		i;
	int		sign;

	size = 0;
	sign = 0;
	i = 0;
	number_size = 1;
	//if n is negative
	if (n < 0)
		sign = 1;
		n *= -1;
	while (n / number_size > 1)
	{
		number_size *= 10;
		size++;
	}
	str = (char *)malloc(sizeof(char) * size + sign + 1);
	if (!str)
		return (NULL);
	if (sign == 1)
	{
		str[0] = '-';
		i = 1;
	}
	while (number_size > 0)
	{
		printf("num: %d\n",n/number_size%10 + '0');
		str[i] = n/number_size%10 + '0';
		number_size /= 10;
		i++;
	}
	str[i] = '\0';
	return (str); */
