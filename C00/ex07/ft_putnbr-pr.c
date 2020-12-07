/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:16:22 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/03 21:51:45 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ns_number(int xp)
{
	int div;

	div = 0;
	while (xp > 10)
	{
		xp = xp / 10;
		div = div * 10;
	}
	return (div);
}

void	ft_putnbr(int xp)
{
	char num;
	int n2;
	int div;

	div = ns_number(xp);

	while (xp > 10)
	{
		xp = xp / div;
		num = '0' + n2;
		ft_putchar(num);
		div = div / 10;
	}
	num = '0' + xp;
	ft_putchar(num);
}

int	main(void)
{
	ft_putnbr(398);
}
