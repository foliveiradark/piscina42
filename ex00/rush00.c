/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dode-lim <dode-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:34:50 by alecrist          #+#    #+#             */
/*   Updated: 2026/03/01 17:05:20 by dode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	rush(int width, int height)
{
	int	n;
	int	break_line;
	int	total;

	n = 1;
	break_line = width + 1;
	total = break_line * height;
	while (n < total)
	{
		if (n <= width && n % break_line == 1
			|| n <= width && n % break_line == width
			|| n >= total - break_line && n % break_line == 1
			|| n >= total - break_line && n % break_line == width)
			ft_putchar('o');
		else if (n % break_line == 0)
			ft_putchar('\n');
		else if (n % break_line == 1 || n % break_line == width)
			ft_putchar('|');
		else if (n >= total - break_line || n <= width)
			ft_putchar('-');
		else
			ft_putchar(' ');
		n++;
	}
	ft_putchar('\n');
}
