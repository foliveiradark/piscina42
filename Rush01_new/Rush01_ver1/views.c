/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:16:48 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/08 13:36:16 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_views_left(char **board, int row)
{
	int	visible;
	int	max;
	int	j;

	visible = 0;
	max = 0;
	j = 0;
	while (j < 4)
	{
		if (board[row][j] > max + '0')
		{
			visible++;
			max = board[row][j] - '0';
		}
		j++;
	}
	return (visible);
}

int	ft_count_views_right(char **board, int row)
{
	int	visible;
	int	max;
	int	j;

	visible = 0;
	max = 0;
	j = 3;
	while (j >= 0)
	{
		if (board[row][j] > max + '0')
		{
			visible++;
			max = board[row][j] - '0';
		}
		j--;
	}
	return (visible);
}

int	ft_count_views_top (char **board, int col)
{
	int	visible;
	int	max;
	int	j;

	visible = 0;
	max = 0;
	j = 0;
	while (j < 4)
	{
		if (board[j][col] > max + '0')
		{
			visible++;
			max = board[j][col] - '0';
		}
		j++;
	}
	return (visible);
}

int	ft_count_views_bottom(char **board, int col)
{
	int	visible;
	int	max;
	int	j;

	visible = 0;
	max = 0;
	j = 3;
	while (j >= 0)
	{
		if (board[j][col] > max + '0')
		{
			visible++;
			max = board[j][col] - '0';
		}
		j--;
	}
	return (visible);
}

int	ft_check_views(char **board, char *clues)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (ft_count_views_top(board, i) != clues[i] - '0')
			return (0);
		if (ft_count_views_bottom(board, i) != clues[i + 4] - '0')
			return (0);
		if (ft_count_views_left(board, i) != clues[i + 8] - '0')
			return (0);
		if (ft_count_views_right(board, i) != clues[i + 12] - '0')
			return (0);
		i++;
	}
	return (1);
}
