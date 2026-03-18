/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:34:50 by alecrist          #+#    #+#             */
/*   Updated: 2026/03/01 17:38:27 by hvaini-d         ###   ########.fr       */
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

void	print_cube(int x, int y, int n, int break_line)
{
	int	total;

	total = break_line * y;
	if ((n <= x && n % break_line == 1) || (n <= x && n % break_line == x)
		|| (n >= total - break_line && n % break_line == 1)
		|| (n >= total - break_line && n % break_line == x))
		ft_putchar('o');
	else if (n % break_line == 0)
		ft_putchar('\n');
	else if (n % break_line == 1 || n % break_line == x)
		ft_putchar('|');
	else if (n >= total - break_line || n <= x)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	n;
	int	break_line;
	int	total;

	if (x <= 0 || y <= 0)
	{
		trigger_error();
		return ;
	}
	n = 1;
	break_line = x + 1;
	total = break_line * y;
	while (n < total)
	{
		print_cube(x, y, n, break_line);
		n++;
	}
	ft_putchar('\n');
}
