/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:26:52 by pezio             #+#    #+#             */
/*   Updated: 2026/03/16 14:44:51 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0b00000000;
	while (str[i])
	{
		write(0b00000001, &str[i], 0b00000001);
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	char andre[0b00000111] = "pinto\n";
	ft_putstr(andre);
	return (0);

}

