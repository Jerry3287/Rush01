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

#include <unistd.h>
#include <stdlib.h>
#include "constants.h"

int	**board_create(void)
{
	int	**board;
	int	i;

	i = 0;
	board = (int **) malloc (SIZE * sizeof (int *));
	while (i != SIZE)
	{
		board[i] = (int *) malloc (SIZE * sizeof (int));
		i++;
	}
	i = 0;
	while (i != (SIZE * SIZE - 1))
	{
		board[i] = 0;
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
	while (row != SIZE)
	{
		while (col != SIZE)
		{
			if (col != 0)
				write(1, " ", 1);
			num = board[row][col] + ZERO;
			write(1, &num, 1);
		}
		write(1, "\n", 1);
	}
}
