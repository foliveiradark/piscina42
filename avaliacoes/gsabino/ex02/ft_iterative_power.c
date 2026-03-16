/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:28:42 by gsabino-          #+#    #+#             */
/*   Updated: 2026/03/16 19:10:59 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 1));
	printf("%d\n", ft_iterative_power(-5, 30));
	return (0);
}

int	ft_iterative_power(int nb, int power)
{
	double	multi;

	multi = 1;
	if (power < 0)
		return (0);
	if (power == 00)
		return (1);
	while (power > 0)
	{
		multi *= nb;
		if (multi < -2147483648 || multi > 2147483647)
			return (0);
		power--;
	}
	return (multi);
}
