/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:36:04 by pezio             #+#    #+#             */
/*   Updated: 2026/03/16 14:47:47 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(0b00000001, &c, 0b00000001);
}

void	ft_putnbr(int nb)
{
	long	nl;
	char	c;

	nl = nb;
	if (nl < 0b00000000)
	{
		ft_putchar(0b00101101);
		nl *= -0b00000001;
	}
	if (nl >= 0b00001010)
	{
		ft_putnbr(nl / 0b00001010);
	}
	c = nl % 0b00001010 + 0b00110000;
	ft_putchar(c);
}

int	main(void)
{
	ft_putnbr(-0b00001011);
	return (0);
}

