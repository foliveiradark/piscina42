/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:01:12 by flavio            #+#    #+#             */
/*   Updated: 2026/03/14 14:26:51 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while	(*str)
	{
		count++;
		str++;
	}
	return(count);
}

int	main(void)
{
	int len;

	len = ft_strlen("Confia no processo!");
	printf("Tamanho = %d\n", len);
	return(0);
}
