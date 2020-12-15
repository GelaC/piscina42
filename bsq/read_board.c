/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:12:39 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/15 21:58:56 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		board_width(char *board)
{
	int i;
	int col;

	i = 0;
	while (board[i] != '\n')
		i++;
	while (board[i] != '\n')
	{
		col++;
		i++;
	}
	col++;
	return (col);
}

void	read_board(char *board)
{
	int		i;
	char	path;
	char	obst;
	char	cros;
	int		col;

	path = board[1];
	obst = board[2];
	cros = board[3];
	i = 0;
	col = board_width(board);
}
