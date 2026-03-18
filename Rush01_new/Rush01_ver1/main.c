/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:13:19 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/08 12:46:59 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_parse(char *str, char *clues);

char	**ft_create_board(void);

int		ft_solve(char **board, char *clues, int row, int col);

int	main(int argc, char **argv)
{
	char	clues[16];
	char	**board;

	if(argc != 2)
	{	write(1, "Error\n", 6);
		return (1);		
	}
	if (ft_parse(argv[1], clues) == -1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	board = ft_create_board();
	if (board == NULL)
	{
		write(1, "Error\n", 6);
		return (1);
	}		
	if(ft_solve(board, clues, 0, 0) == 0)
		write(1, "Error\n", 6);
	return (0);
}


