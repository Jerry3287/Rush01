/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:05:23 by jefong            #+#    #+#             */
/*   Updated: 2024/01/21 16:05:26 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int	check_up(int **board, int col, int *row_up)
{
	int	view;
	int	i;

	i = 1;
	view = 1;
	while (i < g_size)
	{
		if (board[i][col] < board[i + 1][col])
			view += 1;
		if (view > row_up[col])
			return (0);
	}
	return (1);
}

int	check_down(int board[g_size][g_size], int col, int *row_down)
{
	int	view;
	int	i;

	i = g_size;
	view = 1;
	while (i > 1)
	{
		if (board[i][col] < board[i - 1][col])
			view += 1;
		if (view > row_down[col])
			return (0);
	}
	return (1);
}

int	check_left(int board[g_size][g_size], int row, int *col_left)
{
	int	view;
	int	i;

	i = 1;
	view = 1;
	while (i < g_size)
	{
		if (board[row][i] < board[row][i + 1])
			view += 1;
		if (view > col_left[row])
			return (0);
	}
	return (1);
}

int	check_right(int board[g_size][g_size], int row, int *col_right)
{
	int	view;
	int	i;

	i = g_size;
	view = 1;
	while (i < g_size)
	{
		if (board[row][i] < board[row][i - 1])
			view += 1;
		if (view > col_right[row])
			return (0);
	}
	return (1);
}

int	check_visibility(int **board, int row, int col, int **border)
{
	int visible;

	visible = 1;
	visible *= check_up(board, col, border[0]);
	visible *= check_down(board, col, border[1]);
	visible *= check_left(board, row, border[2]);
	visible *= check_right(board, row, border[3]);
	return (visible);
}
