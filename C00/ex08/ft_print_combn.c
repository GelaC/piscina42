/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:50:22 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/09 22:21:14 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char x;
	char b;
	char c;

	b = 0;
	if (n > 0 && n <= 9)
	{
		while (n > 0)
		{// que escriba en bucle con valores que empiecen a partir del último ¿?
			while (b <= '9')
			{
				ft_putchar(b);
				if (b + 1 <= '9')
				{
					ft_putchar(b + 1);
				}
				// ft_print_combn();
				ft_putchar(',');
				ft_putchar(' ');
				b++;
			}
			n--;
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
