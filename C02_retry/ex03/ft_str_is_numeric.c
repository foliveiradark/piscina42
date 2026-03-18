/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:53:06 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/18 15:54:18 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
    char str3[] = "";

    printf("%s - somente Números = %d\n", str1, ft_str_is_numeric(str1));
    printf("%s - letras e números = %d\n", str2, ft_str_is_numeric(str2));
    printf("%s - string vazia = %d\n", str3, ft_str_is_numeric(str3));

    return(0);
} */
