/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:13:19 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/08 14:55:54 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_parse(char *str, char *clues);

char	**ft_create_board(void);

int		ft_solve(char **board, char *clues, int row, int col);

void	ft_free_board(char **board);

int		ft_error(char **board);

int	main(int argc, char **argv)
{
	char	clues[16];
	char	**board;

	if (argc != 2)
		return (ft_error(NULL));
	if (ft_parse(argv[1], clues) == -1)
		return (ft_error(NULL));
	board = ft_create_board();
	if (board == NULL)
		return (ft_error(NULL));
	if (ft_solve(board, clues, 0, 0) == 0)
		return (ft_error(board));
	ft_free_board(board);
	return (0);
}

int	ft_error(char **board)
{
	if (board)
		ft_free_board(board);
	write(1, "Error\n", 6);
	return (1);
}
