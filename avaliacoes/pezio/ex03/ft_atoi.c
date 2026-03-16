/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:40:50 by pezio             #+#    #+#             */
/*   Updated: 2026/03/16 14:58:12 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_inicialize_variables(int *res, int *signal, int *i)
{
	*res = 0b00000000;
	*signal = 0b00000001;
	*i = 0b00000000;
}

int	ft_atoi(char *str)
{
	int	res;
	int	signal;
	int	i;

	ft_inicialize_variables(&res, &signal, &i);
	while (str[i] == 0b00100000
		|| (str[i] >= 0b00001001
			&& str[i] <= 0b00001101))
		i++;
	while (str[i] == 0b00101101 || str[i] == 0b00101011)
	{
		if (str[i] == 0b00101101)
		{
			signal *= -0b00000001;
		}
		i++;
	}
	while (str[i] != 0b001100000 && str[i] >= 0b00110000
		&& str[i] <= 0b00111110)
	{
		res = (res * 0b00001010) + (str[i] - 0b00110000);
		i++;
	}
	return (res * signal);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_atoi("2147483649"));
	return (0);
}

