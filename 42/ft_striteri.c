/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:15:56 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/15 15:15:56 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//tests
/* void	change_char(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
} */
void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (!str || !f)
		return;
	index = 0;
	while (str[index])
	{
		f(index, &str[index]);
		index++;
	}
}
/*
//tests
int	main(void)
{
	char	str[] = "abc";

	ft_striteri(str, change_char);
	ft_putendl_fd(str, 1);
	return (0);
}
 */
