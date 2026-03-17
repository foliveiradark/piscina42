/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:19:03 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/17 18:36:19 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main (void)
{
	char	str1[] = "1234";
	char	str2[] = "Piscina 42";
	char	str3[] = "PISCINA";
	char	str4[] = "";
	char	str5[] = "Olá \t Pisciner";

	printf("%s - somente Números = %d\n", str1, ft_str_is_printable(str1));
	printf("%s - letras e números = %d\n", str2, ft_str_is_printable(str2));
	printf("%s - somente maiusculas = %d\n", str3, ft_str_is_printable(str3));
	printf("%s - string vazia = %d\n", str4, ft_str_is_printable(str4));
	printf("%s caracter não imprimível = %d\n", str5, ft_str_is_printable(str5));
} */