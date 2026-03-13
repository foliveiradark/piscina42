/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 18:51:46 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/11 19:54:17 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "42 São Paulo";
	char	dest[20]; // Buffer com espaço suficiente
	unsigned int n = 2;

	printf("--- Teste ft_strncpy ---\n");
	printf("Source: %s\n", src);
	printf("Valor de n: %u\n", n);

	// Chamada da sua função
	ft_strncpy(dest, src, n);

	printf("Destino após a função: %s\n", dest);

	// Teste de preenchimento com '\0' (caso n > strlen(src))
	// Se n for 15 e a string tem 12, os últimos 3 devem ser nulos.
	printf("Caractere no índice 14 (deve ser vazio/0): '%c'\n", dest[14]);

	return (0);
}