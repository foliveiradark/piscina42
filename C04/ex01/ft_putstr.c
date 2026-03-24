/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:43:25 by flavio            #+#    #+#             */
/*   Updated: 2026/03/24 12:57:01 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//forma base
/* void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] !='\0')
	{
		write(1, &str[i], 1);
		i++;
	}
} */
//forma utlizando o ponteiro para percorrer as strings
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	ft_putstr("Teste Piscina 42 \n");
}