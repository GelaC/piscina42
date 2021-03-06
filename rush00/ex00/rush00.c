/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:20:30 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/30 11:06:02 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
void	error(int x, int y);

void	rush(int x, int y)
{
	int lin;
	int col;

	lin = 1;
	col = 1;
	while (lin <= y)
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

void error(int x, int y)
{
	if (x == 0 || y == 0 || x < 0 || y < 0)
		write(1, "\\\\\\ERROR\\\\\\\nNegative or null values of x and/or y\n", 57);
}
