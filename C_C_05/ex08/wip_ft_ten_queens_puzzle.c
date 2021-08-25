/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:37:24 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/08/24 14:31:44 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*char	*init_board(char *board)
{
	int	x;

	x = 0;
	while (x < 100)
	{
		board[x] = 'x';
		x++;
	}
	return (board);	
}*/

int	*check_pos(char *board)
{
	int	x;
	int	result;

	x = 0;
	while (x < 100)
	{
		if (board[x] != 'Q' && board[x]-1 != 'Q')
		x++;
	}
	return (result);	
}

char	*print_board(char *board)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= 10)
	{
		x = 1;
		while (x <= 10)
		{
			write(1, &board[y * x - 1], 1);
			if (x == 10)
				write(1, "\n", 1);	
			x++;
		}
		y++;
	}
	return (0);	
}

int	ft_ten_queens_puzzle(void)
{
	char	board[100];	
	int	x;

	x = 0;
	while (x < 100)
	{
		board[x] = 'x';
		x++;
	}
	//init_board(board);
	print_board(board);
	
	return (0);
}

int	main(void)
{
	ft_ten_queens_puzzle();
	// int	x;
	// int	y;

	// x = 0;
	// y = 0;
	// while (y < 10)
	// {
	// 	x = 0;
	// 	while (x < 10)
	// 	{
	// 		printf(". ");
	// 		x++;
	// 	}
	// 	printf("\n");
	// 	y++;
	// }
}