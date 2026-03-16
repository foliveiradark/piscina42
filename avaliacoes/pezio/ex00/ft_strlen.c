/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:17:52 by pezio             #+#    #+#             */
/*   Updated: 2026/03/16 14:42:45 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0b00000000;
	while (str[i] != 0b00000000)
		i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char robertao[0b00000111] = "lanches";
	printf("%d\n", ft_strlen(robertao));
	return (0);
}

