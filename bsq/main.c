/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:00:13 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/15 21:48:49 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	*board;
	int		file;
	int		index;

	index = 0;
	board = (char*)malloc(sizeof(char) * 2000);
	file = open(argv[1], O_RDWR);
	if (read(file, board, 2000) > 0)
	{
		while (board[index] != '\n')
			index++;
		index++;
		while (board[index] != '\0')
		{
			ft_putchar(board[index]);
			index++;
		}
		ft_putchar('\n');
	}
	else
		write(1, "Error de lectura de tablero\n", 29);
	close(file);
	free(board);
	return (0);
}
