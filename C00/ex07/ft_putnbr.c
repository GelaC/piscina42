/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:16:22 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/02 22:20:03 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	parts(int xp)
{
	char num;
	int r;
	int n2;

	r = xp % 10;
	n2 = xp / 10;
	num = '0' + r;
	return ('num');
}

void	ft_putnbr(int nb)
{
	char num0;

	num0 = parts();
	ft_putchar(num);
}

int	main(void)
{
	ft_putnbr(98);
}
