/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dode-lim <dode-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:37:47 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/01 16:51:42 by dode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

int	print_sides(int n, int x, int y, int break_line)
{
	int	total;

	total = y * break_line;
	if (n <= x && n % break_line == 1)
		ft_putchar('/');
	else if (n <= x && n % break_line == x)
		ft_putchar('\\');
	else if (n >= total - break_line && n % break_line == 1)
		ft_putchar('\\');
	else if (n >= total - break_line && n % break_line == x)
		ft_putchar('/');
	else
		return (0);
	return (1);
}

int	print_body(int n, int x, int y, int break_line)
{
	int	total;

	total = y * break_line;
	if (n % break_line == 0)
		ft_putchar('\n');
	else if (n % break_line == 1)
		ft_putchar('*');
	else if (n % break_line == x)
		ft_putchar('*');
	else if (n <= x)
		ft_putchar('*');
	else if (n >= total - break_line)
		ft_putchar('*');
	else
		ft_putchar(' ');
	return (1);
}

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

void	rush(int x, int y)
{
	int	n;
	int	break_line;
	int	total;
	int	has_printed;

	if (x <= 0 || y <= 0)
	{
		trigger_error();
		return ;
	}
	n = 1;
	break_line = x + 1;
	total = break_line * y;
	has_printed = 0;
	while (n < total)
	{
		if (print_sides(n, x, y, break_line) == 0)
			print_body(n, x, y, break_line);
		n++;
	}
	ft_putchar('\n');
}
