/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:50:22 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/04 12:04:37 by acebrian         ###   ########.fr       */
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

	while (n > 0 && n <= 9) 
	{
		if (n == 1)
		{
			x = 0;
			while (x <= '9')
			{
				ft_putchar(x);
				if (x != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				x++;
			}
		}

		else
		{
			/* code */
		}

		n--;
	}
}

int	main(void)
{
	ft_print_combn(1);
	return (0);
}