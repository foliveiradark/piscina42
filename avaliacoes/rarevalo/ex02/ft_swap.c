/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 00:00:37 by rarevalo          #+#    #+#             */
/*   Updated: 2026/03/11 21:05:24 by fcampos-         ###   ########.fr       */
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

int	main(void)
{
	int	a1;
	int	a2;

	a1 = 'A';
	a2 = 'b';
	printf("%d %d \n", a1, a2);
	ft_swap(&a1, &a2);
	printf("%d %d", a1, a2);
}
