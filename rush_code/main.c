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
int	solve(int board[g_size][g_size]);

int	main(int argc, char *argv[])
{
	int	**board;

	g_size = 0;
	board = board_create();
	return (0);
}
