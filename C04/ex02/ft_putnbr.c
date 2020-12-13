/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 21:43:54 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/13 22:03:49 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ftputchar('-');
		ftputchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ftputchar('-');
			nb = -nb;
		}
		if (nb < 10)
			ftputchar(nb + '0');
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

int	main(void)
{
	ft_putnbr(0);
	return (0);
}
