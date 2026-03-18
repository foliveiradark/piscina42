/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:41:31 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/08 12:35:29 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_create_board(void)
{
	char	**board;
	int		i;
	int		j;

	board = malloc(sizeof(char *) * 4);
	if (board == NULL)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		board[i] = malloc(sizeof(char) * 4);
		if (board[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j <4)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	return (board);
}
