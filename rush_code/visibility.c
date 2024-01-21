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

int	check_up(int board[g_size][g_size], int col, int *row_up)
{
	int	i;
	int	view;

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
	int	i;
	int	view;

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
	int	i;
	int	view;

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

int	check_right(int board[g_size][g_size], int row, int *col_down)
{
	int	i;
	int	view;

	i = g_size;
	view = 1;
	while (i < g_size)
	{
		if (board[row][i] < board[row][i - 1])
			view += 1;
		if (view > row_right[row])
			return (0);
	}
	return (1);
}
