/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:43:36 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/17 20:10:02 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/* int	main (void)
{
	char	str1[] = "confia no processo!";
	char	str2[] = "será que funciona com números? 123";
	
	printf("Entrada: %s \n", str1);
	printf("Entrada: %s \n", str2);
	
	ft_strupcase(str1);
	ft_strupcase(str2);
	printf("Saída: %s\n", str1);
	printf("Saída: %s \n", str2);
} */
