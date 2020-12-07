/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pelultima_cl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:22:26 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/04 14:51:17 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftputchar(char c)
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