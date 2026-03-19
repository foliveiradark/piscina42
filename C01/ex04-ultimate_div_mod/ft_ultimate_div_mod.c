/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 10:56:23 by flavio            #+#    #+#             */
/*   Updated: 2026/03/16 14:08:38 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>
#include<unistd.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

/* int main (void)
{
	int a;
	int b;
	char c;

	a = 16;
	b = 5;
	
	ft_ultimate_div_mod(&a, &b);

	c = a + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	
	c = b + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	

	printf("Retorno de a = %d\n", a);
	printf("Retorno de b = %d\n", b);

	return(0);
} */
