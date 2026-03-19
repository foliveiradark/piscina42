/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 21:08:09 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/19 10:26:44 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	while (nb > 0 && *src != '\0')
	{
		*p = *src;
		p++;
		src++;
		nb--;
	}
	*p = '\0';
	return (dest);
}

/* #include <unistd.h>

void	ft_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_nbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_nbr(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	unsigned int	nb;

	if (argc == 4)
	{
		nb = ft_atoi(argv[3]);
		ft_strncat(argv[1], argv[2], nb);
		ft_str(argv[1]);
		ft_str("\n");
	}
	else
	{
		ft_str("Insira três parametros!\n");
	}
	return (0);
} */
