/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:41:31 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/07 16:58:24 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_create_board(void)
{
	char	**board;
	int		i;
	int		j;

	i = -1;
	j = -1;
	board = malloc(sizeof(char *) * 4);
	if (board == NULL)
		return (NULL);
	while (++i < 4)
	{
		board[i] = malloc(sizeof(char) * 4);
		if (board[i] == NULL)
			return (NULL);
	}
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			board[i][j] = '0';
	}
	return (board);
}

void	ft_free_board(char **board)
{
	int	i;

	i = -1;
	while (++i < 4)
		free(board[i]);
	free(board);
}
