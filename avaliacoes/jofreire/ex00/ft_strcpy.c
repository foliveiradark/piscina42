/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:01:58 by jofreire          #+#    #+#             */
/*   Updated: 2026/03/18 20:35:03 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *origin)
{
	int	i;

	i = 0;
	while (origin[i] != '\0')
	{
		dest[i] = origin[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[5];
	char	origin[] = "Testando";

	printf("%s", ft_strcpy(dest, origin));
	return (0);
}
