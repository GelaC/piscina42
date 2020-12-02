/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2 copy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:26:55 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/02 21:05:55 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_n1_00(char n1, char n2)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(' ');
}

void	ft_putchar_00_n2(char n1, char n2)
{
	ft_putchar(n1);
	ft_putchar(n2);
	if (n1 != '9' && n2 != '9')
		ft_putchar(',');
		ft_putchar(' ');
}


/* lista de números; ab da la vuelta y empieza por cd+1; cd da la vuelta y empieza por ab+1 */

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
					ft_putchar_n1_00(mil, cen);
					ft_putchar_00_n2(dec, uni);
					if (uni < cen)
						uni++;
					else
						uni = cen + 1;
				}
				if (dec > mil)
					dec++;
				else
					dec = mil + 1;
			}
			if (cen > uni)
				cen++;
			else
				cen = uni + 1;
		}
		if (cen > uni)
			cen++;
		else
			cen = uni + 1;
	}
}

int	main(void)
{
	ft_print_comb2('0', '0', '0', '0');
	return (0);
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
					uni++;
				}
				dec++;
			}
			dec = '0';
			cen++;
			uni = cen + 1;
		}
		cen = '0';
		mil++;
		dec = mil + 1;
	}
}