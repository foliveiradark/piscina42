/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:43:10 by lfurtado          #+#    #+#             */
/*   Updated: 2026/03/17 17:00:23 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (*to_find == '\0')
		return (str);
	while (*str != 0) //funciona como \0
	{
		if (*str == *to_find)
		{
			s = str;
			f = to_find;
			while (*s != '\0' && *f != '\0' && *s == *f)
			{
				s++;
				f++;
			}
			if (*f == '\0')
				return (str);
		}
		str++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	texto[] = "";
	char	busca[] = "comeu";
	char	*resultado = ft_strstr(texto, busca);

	printf("Palavra encontrada!\n");
	printf("A partir da busca, o texto e: %s\n", resultado);
}

