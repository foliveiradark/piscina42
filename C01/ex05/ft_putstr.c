/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:54:47 by flavio            #+#    #+#             */
/*   Updated: 2026/03/14 12:50:48 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	while	(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	ft_putstr("Confia no processo! \n");
	return(0);
}
