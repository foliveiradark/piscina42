/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:26:40 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/01 18:00:51 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	trigger_error(void)
{
	ft_putchar('E');
	ft_putchar('R');
	ft_putchar('R');
	ft_putchar('O');
	ft_putchar('R');
	ft_putchar(':');
	ft_putchar(' ');
	ft_putchar('I');
	ft_putchar('N');
	ft_putchar('V');
	ft_putchar('A');
	ft_putchar('L');
	ft_putchar('I');
	ft_putchar('D');
	ft_putchar(' ');
	ft_putchar('X');
	ft_putchar(' ');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar(' ');
	ft_putchar('y');
	ft_putchar('\n');
}

void	draw_cube(int n, int y, int x, int x_new_line)
{
	int	total;

	total = x_new_line * y;
	if (((n >= total - x_new_line) && (n % x_new_line == 1)) || (n == 1))
		ft_putchar('A');
	else if (((n >= total - x_new_line) && (n % x_new_line == x))
		|| (n == x))
		ft_putchar('C');
	else if (n % x_new_line == 0)
		ft_putchar('\n');
	else if ((n % x_new_line == 1) || (n % x_new_line == x))
		ft_putchar('B');
	else if ((n <= x) || (n >= total - x_new_line))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	n;
	int	x_new_line;
	int	total;

	if (x <= 0 || y <= 0)
	{
		trigger_error();
		return ;
	}
	n = 1;
	x_new_line = x + 1;
	total = x_new_line * y;
	while (n < total)
	{
		draw_cube(n, y, x, x_new_line);
		n++;
	}
	ft_putchar('\n');
}
