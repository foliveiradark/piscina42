/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:56:33 by mathhenr          #+#    #+#             */
/*   Updated: 2026/03/16 16:48:26 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

#include <stdio.h>

int	main(void)
{
	char c[] = "Matheus Henrique";
	printf("Tamanho: %d\n", ft_strlen(c));
	return (0);
}
