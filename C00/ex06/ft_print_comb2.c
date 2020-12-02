/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:26:55 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/02 21:05:36 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comas(char n1, char n2, char n3, char n4)
{
	if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
	{
		write(1, "pwd", 0);
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar00_00(char n1, char n2, char n3, char n4)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(' ');
	ft_putchar(n3);
	ft_putchar(n4);
}

void	ft_print_comb2(char mil, char cen, char dec, char uni)
{
	while (mil <= '9')
	{
		while (cen <= '9')
		{
			while (dec <= '9')
			{
				while (uni <= '9')
				{
					ft_putchar00_00(mil, cen, dec, uni);
					comas(mil, cen, dec, uni);
					uni++;
				}
				dec++;
				uni = '0';
			}
			cen++;
			dec = mil;
			uni = cen + 1;
		}
		mil++;
		cen = '0';
		dec = mil;
		uni = cen + 1;
	}
}

int	main(void)
{
	ft_print_comb2('0', '0', '0', '1');
	return (0);
}
