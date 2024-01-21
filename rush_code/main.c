/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefong <jefong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:22:36 by jefong            #+#    #+#             */
/*   Updated: 2024/01/20 16:22:39 by jefong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int	**board_create(void);
void	board_print(int **board);
int	solve(int board[g_size][g_size]);

int	main(int argc, char **argv)
{
	int **borders;
	int	**board;
	int n;

	g_size = calculate_n(argv[1]);
	borders = borders_create(argv[1], g_size);
	board = board_create();
	board_print(board);
	return (0);
}
