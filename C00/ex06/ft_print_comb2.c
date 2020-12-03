/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:19:42 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/03 14:50:29 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_00_00(char n1, char n2, char n3, char n4)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(' ');
	ft_putchar(n3);
	ft_putchar(n4);
	if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
		write(1, "", 0);
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb_fc(char mil, char cen, char dec, char uni)
{
	while (mil <= '9')
	{
		while (cen <= '9')
		{
			while (dec <= '9')
			{
				while (uni <= '9')
				{
					ft_putchar_00_00(mil, cen, dec, uni);
					uni++;
				}
				dec++;
				uni = cen;
			}
			cen++;
			dec = mil;
			uni = cen + 1;
		}
		mil++;
		cen = '0';
	}
}

void	ft_print_comb2(void)
{
	int o1;
	int o2;
	int o3;
	int o4;

	o1 = '0';
	o2 = '0';
	o3 = '0';
	o4 = '1';
	ft_print_comb_fc(o1, o2, o3, o4);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
