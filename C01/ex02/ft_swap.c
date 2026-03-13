/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:16:24 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/12 21:36:48 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int main (void)
{
	int a;
	int b;

	a = 20;
	b = 26;
	
	ft_swap(&a, &b);
	
	printf("%d %d\n", a, b);
	return(0);
} */
