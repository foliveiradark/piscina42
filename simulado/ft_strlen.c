/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 21:06:24 by flavio            #+#    #+#             */
/*   Updated: 2026/03/19 21:44:18 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
 */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= '\0')
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("Teste len = %d \n", ft_strlen("hello"));
	// ft_putnbr(ft_strlen("hello"));
	// ft_putchar('\n');
}


