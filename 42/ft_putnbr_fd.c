/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nektoreal <koladaoleg384@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:57:24 by Nektoreal         #+#    #+#             */
/*   Updated: 2026/10/15 14:57:24 by Nektoreal        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb / 10 > 0)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

/* int	main(void)
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(123, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-123, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	return (0);
} */
