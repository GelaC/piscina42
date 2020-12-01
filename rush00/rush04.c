/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:07:07 by dagarcia          #+#    #+#             */
/*   Updated: 2020/11/29 22:43:26 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	loop(int row, int col, int x, int y)
{
	while (col <= x)
	{
		if (row == 1 || row == y || col == 1 || col == x)
			if (row == 1 && col == 1)
				ft_putchar('A');
			else if (((row == y && col == x) && ((x > 1) && (y > 1))))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == 1))
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
	while (row <= y)
	{
		loop(row, col, x, y);
		ft_putchar('\n');
		row++;
		col = 1;
	}
}
