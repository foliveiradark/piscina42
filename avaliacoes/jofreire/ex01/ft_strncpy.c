/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:02:57 by jofreire          #+#    #+#             */
/*   Updated: 2026/03/18 20:39:23 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *origin, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && origin[i] != '\0')
	{
		dest[i] = origin[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[5] = {0};
	char	origin[] = "Verificando";

	printf("%s", ft_strncpy(dest, origin, 2));
	return (0);
}
