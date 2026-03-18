/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 19:48:07 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/17 20:16:43 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char str1[] = "CONFIA NO PROCESSO";
	char str2[] = "PISCINA 42";

	printf("Entrada: %s\n", str1);
	printf("Entrada: %s\n", str2);

	ft_strlowcase(str1);
	printf("Saída: %s\n", str1);
	
	ft_strlowcase(str2);
	printf("Saída: %s\n", str2);
} */
