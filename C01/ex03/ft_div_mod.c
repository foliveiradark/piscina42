/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 09:59:27 by flavio            #+#    #+#             */
/*   Updated: 2026/03/14 10:34:30 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int d;
	int m;
	char c;

	ft_div_mod(17, 5, &d, &m);
	
	c = d + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	
	c = m +'0';
	write(1, &c, 1);
	write(1, "\n", 1);

	printf("retorno de div = %d\n", d);
	printf("retorno de mod = %d\n", m);
	
	return(0);
}
