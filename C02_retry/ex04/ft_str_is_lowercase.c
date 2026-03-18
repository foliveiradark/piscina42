/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 21:14:06 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/17 14:37:13 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char str1[] = "123";
	char str2[] = "Piscina42";
	char str3[] = "confianoprocesso";
	char str4[] = "";

	printf("%s - somente Números = %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s - letras e números = %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s - somente minusculas = %d\n", str3, ft_str_is_lowercase(str3));
	printf("%s - string vazia = %d\n", str4, ft_str_is_lowercase(str4));

	return(0);
} */
