/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:38:05 by gsabino-          #+#    #+#             */
/*   Updated: 2026/03/16 19:21:48 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb);


int	main(void)
{
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(2));
	printf("%d \n", ft_is_prime(-1));
	printf("%d \n", ft_is_prime(89));
	printf("%d \n", ft_is_prime(23890));
	return (0);
}


int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
