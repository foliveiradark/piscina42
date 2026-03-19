/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 20:29:56 by vde-alme          #+#    #+#             */
/*   Updated: 2026/03/18 20:21:08 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <unistd.h>

void	ftstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ftnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ftnbr(n / 10);
	n = (n % 10) + '0';
	write (1, &n, 1);
}

int	ftatoi(char *str)
{
	int	res;
	int	sgn;
	
	res = 0;
	sgn = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sgn = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sgn);
}

int	main(int argc, char **argv)
{
	int	res;

	if (argc == 2)
	{	
		res = ft_is_prime(ftatoi(argv[1]));
		ftnbr(res);
	
		if (res == 1)
		{
			ftstr("\n");
			ftstr("É primo!");
		}
		else
		{
			ftstr("\n");
			ftstr("Não é primo!");
		}
	}
	else
	{
		ftstr("Insira um parametro !");	
	}
	return (0);
}
