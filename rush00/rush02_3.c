/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:48:47 by dagarcia          #+#    #+#             */
/*   Updated: 2020/11/30 11:06:14 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	loop(int row, int col, int x, int y, int mirror)
{
	while (col <= x)
	{
		if (row == 1 || row == y || col == 1 || col == x)
			if ((row == 1 && (col == 1 || col == x)) && (mirror == 0))
				ft_putchar('A');
			else if ((row == 1 && (col == 1 || col == x)) && (mirror == 1))
				ft_putchar('C');
			else if ((row == y && (col == 1 || col == x)) && (mirror == 0))
				ft_putchar('C');
			else if ((row == y && (col == 1 || col == x)) && (mirror == 1))
				ft_putchar('A');
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
	int mirror;

	row = 1;
	col = 1;
	mirror = 0;
	if (x < 0)
		x = x * (-1);
	else if (y < 0)
		mirror = 1;
	if (y < 0)
		y = y * (-1);
	while (row <= y && (x > 0 && y > 0))
	{
		loop(row, col, x, y, mirror);
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
