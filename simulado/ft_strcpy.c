/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 21:55:37 by flavio            #+#    #+#             */
/*   Updated: 2026/03/19 22:53:54 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *str)
{
	int	i;

	if (!str)
		return;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= '\0')
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) +  '0');
}
 */
#include <stdio.h>

int main(void)
{
	char	src[] = "hello pisciner";
	char	dest[50] = "0";

	printf("ver src = %s\n", src);
	printf("ver dest = %s\n", dest);

	ft_strcpy(dest, src);
	printf("resultado dest = %s\n", dest);
}