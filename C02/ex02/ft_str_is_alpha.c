/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 12:03:19 by flavio            #+#    #+#             */
/*   Updated: 2026/03/15 13:48:34 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') && 
		!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Piscina42";
	char str3[] = "";
	
	printf("%s - somente letras = %d\n", str1, ft_str_is_alpha(str1));
	printf("%s - letras e números = %d\n", str2, ft_str_is_alpha(str2));
	printf("%s - string vazia = %d\n", str3, ft_str_is_alpha(str3));

	return(0);
}
