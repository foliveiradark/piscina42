/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:41:16 by gsabino-          #+#    #+#             */
/*   Updated: 2026/03/16 19:05:17 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(1));
	printf("%d \n", ft_iterative_factorial(12));
	printf("%d \n", ft_iterative_factorial(13));
	return (0);
}

int	ft_iterative_factorial(int nb)
{
	int	multi;

	multi = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		multi *= nb;
		nb--;
	}
	return (multi);
}
