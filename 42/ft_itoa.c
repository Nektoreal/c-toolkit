/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoliada <okoliada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 19:04:08 by okoliada          #+#    #+#             */
/*   Updated: 2026/10/09 19:04:09 by okoliada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	size(long n)
{
	int	i;

	i = 0;

	if (n < 0)
		sign = 1;
		n *= -1;
	while(n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);

}

char *convert_to_str(char *str, long n_cpy, int i)
{
	if (n_cpy == 0)
	{
		str[0] == '0';
		return (str);
	}
	if (n_cpy < 0)
	{
		str[0] = '-';
		n_cpy *= -1;
	}
	while (n_cpy > 0)
	{
		str[i--] = n_cpy % 10 + '0';
		n_cpy /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{/*
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

	char	*str;
	int		i;
	long	n_cpy;
	n_cpy = n;
	i = size(n_cpy);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return(NULL);
	str[i--] = '\0';
	return (convert_to_str(str, n_cpy, i));
}

int	main(void)
{
	int n = -1234;
	char *str = ft_itoa(n);

	printf("str = %s\n", str);
	return (0);
}
