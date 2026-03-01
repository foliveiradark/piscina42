/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_alecrist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecrist <alecrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:34:50 by alecrist          #+#    #+#             */
/*   Updated: 2026/03/01 15:38:17 by alecrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void rush(int largura, int altura)
{
    int n = 1;
    int quebra_de_linha = largura + 1;
    int total = quebra_de_linha * altura;

    while(n < total)
    {
        if(n <= largura && n % quebra_de_linha == 1)
        	ft_putchar('o');
		else if (n <= largura && n % quebra_de_linha == largura)
			ft_putchar('o');
		else if (n >= total - quebra_de_linha && n % quebra_de_linha == 1)
			ft_putchar('o');
		else if(n >= total - quebra_de_linha && n % quebra_de_linha == largura)
			ft_putchar('o');
        else if(n % quebra_de_linha == 0)
            ft_putchar('\n');
        else if (n % quebra_de_linha == 1 || n % quebra_de_linha == largura)
			ft_putchar('|');
        else if (n >= total - quebra_de_linha || n <= largura)
            ft_putchar('-');
        else
            ft_putchar(' ');
        n++;
    }
	ft_putchar('\n');
}
