/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:42:51 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/30 11:05:53 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:20:30 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/29 17:13:11 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush03(int x, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush03(int x, int y)
{
	int fila;
	int colu;

	if ((x > 0 && y > 0) || (x = 0 || y = 0))
		fila = 1;
		colu = 1;
		while (fila <= y)
		{
			while (colu <= x)
			{
				if (colu == 1 || fila == 1 || colu == x || fila == y)
					if ((colu == 1 && fila ==1) || (colu == x && fila == y))
						ft_putchar('A');
					else if ((colu == 1 && fila == y) || (colu == x && fila == 1))
						ft_putchar('C');
					else
						ft_putchar('B');
				
				else
				ft_putchar(' ');
				colu++;
			}
			ft_putchar('\n');
			colu = 1;
			fila++;
		}
	else
		error(void)
}

void	error(void)
{
	char 
	ft_putchar
}

int	main(void)
{
	rush03(-3, -5);
	return (0);
}
