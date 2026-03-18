/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:26:27 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/08 13:30:29 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char	**board);

int		ft_check_views(char **board, char *clues);

int	ft_is_valid(char **board, int row, int col, int val)
{
	int	j;

	j = 0;
	while (j < col)
	{
		if (board[row][j] == val + '0')
			return (0);
		j++;
	}
	j = 0;
	while (j < row)
	{
		if (board[j][col] == val + '0')
			return (0);
		j++;
	}
	return (1);
}

int	ft_solve(char **board, char *clues, int row, int col)
{
    int     i;

	if (row == 4)
	{	
		if (ft_check_views(board, clues))
		{		
			ft_print(board);
			return (1);
		}
		return (0);
	}
    i = 1;
    while (i <= 4)
    {
	if (ft_is_valid(board, row, col, i))
	{
		board[row][col] = i + '0';
		if (col < 3)
		{
			if (ft_solve(board, clues, row, col + 1))
			return (1);
		}
		else
		{
			if(ft_solve(board, clues, row + 1, 0))
			return (1);
		}	
		board[row][col] = '0';
        }
        i++;
    }
    return (0);
}
