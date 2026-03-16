/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:28:23 by gsabino-          #+#    #+#             */
/*   Updated: 2026/03/16 19:09:20 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d \n", ft_recursive_factorial(0));
	printf("%d \n", ft_recursive_factorial(1));
	printf("%d \n", ft_recursive_factorial(12));
	printf("%d \n", ft_recursive_factorial(13));
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
