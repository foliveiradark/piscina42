/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 12:34:35 by gsabino-          #+#    #+#             */
/*   Updated: 2026/03/16 19:16:24 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_fibonacci(int index);


int	main(void)
{
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(1));
	printf("%d \n", ft_fibonacci(10));
	printf("%d \n", ft_fibonacci(33));
	return (0);
}


int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
