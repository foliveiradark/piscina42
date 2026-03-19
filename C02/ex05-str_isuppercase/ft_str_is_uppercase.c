/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:42:32 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/17 14:57:14 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	str1[] = "1234";
	char	str2[] = "Piscina42";
	char	str3[] = "PISCINA";
	char	str4[] = "";

	printf("%s - somente Números = %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s - letras e números = %d\n", str2, ft_str_is_uppercase(str2));
	printf("%s - somente maiusculas = %d\n", str3, ft_str_is_uppercase(str3));
	printf("%s - string vazia = %d\n", str4, ft_str_is_uppercase(str4));
} */
