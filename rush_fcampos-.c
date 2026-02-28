/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_fcampos-.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 15:47:22 by fcampos-          #+#    #+#             */
/*   Updated: 2026/02/28 18:03:20 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ABBBA
// B   B
// CBBBC

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush_fc(int largura, int altura )
{
    int n = 0;
    int quebra_de_linha = largura + 1;
    int total = quebra_de_linha * altura;

    printf("%d\n"">%d\n"">%d\n", n, quebra_de_linha, total);

    while(n < total)
    {
        //Cantos
        if(n <= largura && n % quebra_de_linha == 1 || n <= largura && n % quebra_de_linha == largura)
            ft_putchar('A');
        else if(n >= total - quebra_de_linha && n % quebra_de_linha == 1 
            || n >= total - quebra_de_linha && n % quebra_de_linha == largura)
            ft_putchar('C');
        
        //Quebra de linhas
        else if(n % quebra_de_linha == 0)
            ft_putchar('\n');
        
        //Paredes
        else if(n % quebra_de_linha == 1 || n % quebra_de_linha == largura )
            ft_putchar('B');
        
        //Chão e teto
        else if(n <= largura || n >= total - quebra_de_linha)
            ft_putchar('B');
    
        else
            ft_putchar(' ');
        n++;
    }
}

int main(void)
{
    rush_fc(10, 5);
}