/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaini-d <hvaini-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:47:22 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/01 17:41:56 by hvaini-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

int	print_cantos(int n, int x, int y, int quebra_de_linha)
{
	int	total;

	total = y * quebra_de_linha;
	if (((n <= x) && (n % quebra_de_linha == 1))
		|| ((n <= x) && (n % quebra_de_linha == x)))
		ft_putchar ('A');
	else if (((n >= total - quebra_de_linha) && (n % quebra_de_linha == 1))
		|| ((n >= total - quebra_de_linha) && (n % quebra_de_linha == x)))
		ft_putchar ('C');
	else
		return (0);
	return (1);
}

int	print_body(int n, int x, int y, int quebra_de_linha)
{
	int	total;

	total = y * quebra_de_linha;
	if (n % quebra_de_linha == 0)
		ft_putchar('\n');
	else if ((n % quebra_de_linha == 1) || (n % quebra_de_linha == x))
		ft_putchar('B');
	else if ((n <= x) || (n >= total - quebra_de_linha))
		ft_putchar('B');
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
	int	quebra_de_linha;
	int	total;
	int	has_printed;

	if (x <= 0 || y <= 0)
	{
		trigger_error();
		return ;
	}
	n = 1;
	quebra_de_linha = x +1;
	total = quebra_de_linha * y;
	has_printed = 0;
	while (n < total)
	{
		if (print_cantos(n, x, y, quebra_de_linha) == 0)
			print_body(n, x, y, quebra_de_linha);
		n++;
	}
	ft_putchar('\n');
}
