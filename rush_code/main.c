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

#include <unistd.h>
#include <stdlib.h>
#include "constants.h"

int	**board_create(void);
int	solve(int board[SIZE][SIZE]);

int	main(int argc, char *argv[])
{
	int	**board;

	board = board_create();
	return (0);
}
