/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:46:22 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/28 21:24:28 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_tres_char(char c, char d, char e)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(e);

}

void	ft_print_comb(void)
{
	char unid;
	char dece;
	char cent;

	cent = '0';
	while(cent <= '7')
	{
		dece = cent + 1;

		while(dece <= '8')
		{
			unid = dece + 1;
			while(unid <= '9')
			{
				ft_put_tres_char(cent, dece, unid);
				if(!(cent == '7' && dece == '8' && unid == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				unid++;
			}
			dece++;
		}
		cent++;
	}
}
int	main(void)
{
	ft_print_comb();
	return (0);
}