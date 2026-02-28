/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_0_testes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:37:47 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/02/28 18:03:42 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

int	print_cantos(int n, int largura, int altura, int quebra_de_linha)
{
	int	total;

	total = altura * quebra_de_linha;
	if (n <= largura && n % quebra_de_linha == 1)
		ft_putchar('A');
	else if (n <= largura && n % quebra_de_linha == largura)
		ft_putchar('B');
	else if (n >= total - quebra_de_linha && n % quebra_de_linha == 1)
		ft_putchar('C');
	else if (n >= total - quebra_de_li5,nha && n % quebra_de_linha == largura)
		ft_putchar('D');
	else
		return (0);
	return (1);
}

int	print_body(int n, int largura, int altura, int quebra_de_linha)
{
	int	total;

	total = altura * quebra_de_linha;
	if (n % quebra_de_linha == 0)
		ft_putchar('\n');
	else if (n % quebra_de_linha == 1)
		ft_putchar('[');
	else if (n % quebra_de_linha == largura)
		ft_putchar(']');
	else if (n <= largura)
		ft_putchar('+');
	else if (n >= total - quebra_de_linha)
		ft_putchar('=');
	else
		ft_putchar('*');
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

void	rush(int largura, int altura)
{
	int	n;
	int	quebra_de_linha;
	int	total;
	int	has_printed;

	if (largura <= 0 || altura <= 0)
	{
		trigger_error();
		return ;
	}
	n = 1;
	quebra_de_linha = largura + 1;
	total = quebra_de_linha * altura;
	has_printed = 0;
	while (n < total)
	{
		if (print_cantos(n, largura, altura, quebra_de_linha) == 1)
			n = n;
		else
			print_body(n, largura, altura, quebra_de_linha);
		n++;
	}
	ft_putchar('\n');
}

// int	main(void)
// {
// 	rush (8, 3);
// 	rush (7, 15);
// 	rush (10, 5);
// 	rush (10, 5);
// 	rush (-10, 5);
// 	rush (10, 0);
// 	rush (10, -10);
// }
