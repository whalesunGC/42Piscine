/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:11:23 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/10 22:11:24 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_puzzle(int *puzzle, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = '0' + puzzle[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_check(int puzzle[10], int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (puzzle[i] == row
			|| puzzle[col - i - 1] == row - i - 1
			|| puzzle[col - i - 1] == row + i + 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int puzzle[10], int col, int *count)
{
	int	i;

	if (col == 10)
	{
		ft_print_puzzle(puzzle, 10);
		*count += 1;
	}
	i = 0;
	while (i < 10)
	{
		if (ft_check(puzzle, col, i))
		{
			puzzle[col] = i;
			ft_solve(puzzle, col + 1, count);
		}
		i++;
	}
}

void	ft_set_board(int *board)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	ft_set_board(board);
	ft_solve(board, 0, &count);
	return (count);
}
