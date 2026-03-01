/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_dode-lin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:26:40 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/01 14:29:43 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	rush(int height, int width)
{
	int	n;
	int	width_new_line;
	int	total;

	n = 1;
	width_new_line = width + 1;
	total = width_new_line * height;
	while (n < total)
	{
		if (n >= total - width_new_line && n % width_new_line == 1 || n == 1)
			ft_putchar('A');
		else if (n >= total - width_new_line && n % width_new_line == width
			|| n == width)
			ft_putchar('C');
		else if (n % width_new_line == 0)
			ft_putchar('\n');
		else if (n % width_new_line == 1 || n % width_new_line == width)
			ft_putchar('B');
		else if (n <= width || n >= total - width_new_line)
			ft_putchar('B');
		else
			ft_putchar(' ');
		n++;
	}
	ft_putchar('\n');
}
