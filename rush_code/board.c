/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:16:43 by jefong            #+#    #+#             */
/*   Updated: 2024/01/20 17:16:45 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int	**board_create(void)
{
	int	**board;
	int	i;
	int	j;

	i = 0;
	board = (int **) malloc (g_size * sizeof (int *));
	while (i != g_size)
	{
		board[i] = (int *) malloc (g_size * sizeof (int));
		j = 0;
		while (j != g_size)
		{
			board[i][j] = 0;
		}
		i++;
	}
	return (board);
}

void	board_print(int **board)
{
	int	row;
	int	col;
	int	num;

	row = 0;
	col = 0;
	num = 0;
	while (row != g_size)
	{
		while (col != g_size)
		{
			if (col != 0)
				write(1, " ", 1);
			num = board[row][col] + '0';
			write(1, &num, 1);
		}
		write(1, "\n", 1);
	}
}
