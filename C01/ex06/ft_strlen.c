/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:01:12 by flavio            #+#    #+#             */
/*   Updated: 2026/03/16 15:14:05 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<unistd.h>
#include<stdio.h> */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/* int	main(void)
{
	int len;

	len = ft_strlen("Confia no processo!");
	printf("Tamanho = %d\n", len);
	return(0);
} */
