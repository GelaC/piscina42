/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:20:30 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/29 18:45:31 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

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
