/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:20:54 by jefong            #+#    #+#             */
/*   Updated: 2024/01/20 16:20:58 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int	check_visibility(int **board, int row, int col, int **border);

int	find_empty_cell(int board[g_size][g_size], int *row, int *col)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_size)
	{
		j = 0;
		while (j < g_size)
		{
			if (board[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
		}
	}
	return (0);
}

int	is_valid(int board[g_size][g_size], int row, int col, int **border)
{
	if (!check_visibility(board, row, col, border))
	{
		return (0);
	}
	return (1);
}

int	solve(int **board)
{
	int	row;
	int	col;
	int	num;

	num = 0;
	if (!find_empty_cell(board, &row, &col))
	{
		return (1);
	}
	while (num <= g_size)
	{
		if (is_valid(board, row, col, num))
		{
			board[row][col] = num;
			if (solve(board))
				return (1);
		}
		board[row][col] = 0;
		num++;
	}
	return (0);
}
