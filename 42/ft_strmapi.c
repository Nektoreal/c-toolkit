/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:25:16 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/15 15:25:16 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//test
/* char	change_char(unsigned int i, char c)
{
	(void)i;
	c = *c + 1;
	return (c + 1);
} */

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			len;
	unsigned int	index;

	if (!str || !f)
		return (NULL);
	index = 0;
	len = ft_strlen(str);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (str[index])
	{
		res[index] = f(index, str[index]);
		index++;
	}
	res[index] = '\0';
	return (res);
}

/* //tests
int	main(void)
{
	char	str[] = "abc";
	char	*res;
	char	*tmp;

	res = ft_strmapi(str, change_char);
	if (!res)
		return (1);
	tmp = res;
	while (*tmp)
	{
		write(1, tmp, 1);
		tmp++;
	}
	write(1, "\n", 1);
	free(res);
	return (0);
} */
