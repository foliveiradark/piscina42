/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:30:59 by nada-sil          #+#    #+#             */
/*   Updated: 2026/03/16 13:57:03 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_s(char str)
{
	int	sinal;

	sinal = 1;
	if (str == '-' || str == '+')
	{
		if (str == '-')
			sinal *= -1;
		if (str == '+')
			sinal *= 1;
	}
	return (sinal);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	sinal;

	sinal = 1;
	number = 0;
	i = 0;
	while (str[i] < 33 || str[i] == 127)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		sinal *= ft_s(str[i]);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sinal);
}
int main(void)
{
	char number[20] = "   +10040";
	printf("%d", ft_atoi(number));
	return (0);
}