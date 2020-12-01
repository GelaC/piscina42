/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:48:47 by dagarcia          #+#    #+#             */
/*   Updated: 2020/11/30 11:06:05 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

void error(int x, int y)
{
	if (x == 0 || y == 0 || x < 0 || y < 0)
	{
		write(1, "\\\\\\ERROR\\\\\\\nNegative or null values of x and/or y\n", 57);
	}
}
	
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int lin;
	int col;

	lin = 1;
	col = 1;
	error(x, y);
		while (lin <= y && (x > 0 && y > 0))
	{
		while (col <= x)
		{
			if (lin == 1 || lin == y || col == 1 || col == x)
				if (lin == 1 && (col == 1 || col == x))
					ft_putchar('A');
				else if (lin == y && (col == 1 || col == x))
					ft_putchar('C');
				else
					ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
		col = 1;
	}
}

int	main(void)
{
	rush(0, 6);
	return (0);
}
