/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:48:47 by dagarcia          #+#    #+#             */
/*   Updated: 2020/11/30 11:06:07 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	loop(int row, int col, int x, int y)
{
	while (col <= x)
	{
		if (row == 1 || row == y || col == 1 || col == x)
			if ((row == 1 && (col == 1 || col == x)))
				ft_putchar('A');
			else if ((row == y && (col == 1 || col == x)))
				ft_putchar('C');
			else
				ft_putchar('B');
		else
			ft_putchar(' ');
		col++;
	}
}

void	rush(int x, int y)
{
	int row;
	int col;

	row = 1;
	col = 1;
	if (x < 0)
		x = x * (-1);
	if (y < 0)
		y = y * (-1);
	while (row <= y && (x > 0 && y > 0))
	{
		loop(row, col, x, y);
		ft_putchar('\n');
		row++;
		col = 1;
	}
}

int		main(void)
{
	rush(-1, 5);
	return (0);
}
