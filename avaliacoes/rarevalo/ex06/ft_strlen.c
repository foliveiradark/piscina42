/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:36:34 by rarevalo          #+#    #+#             */
/*   Updated: 2026/03/11 21:28:23 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int		size;
	char	c;

	size = ft_strlen("42sp");
	c = size + '0';
	write(1, &c, 1);
	return (0);
}*/

int	main(void)
{
	int	size;

	size = ft_strlen("Oi, qual meu tamanho?");
	printf("Size: %d", size);
	return (0);
}
