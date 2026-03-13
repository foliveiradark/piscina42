/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:16:20 by tiagoalm          #+#    #+#             */
/*   Updated: 2026/03/11 19:41:13 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "Piscina 42";
	char	*dest = malloc(strlen(src) + 1);

	ft_strcpy(dest, src);

	printf("Original:  %s\n", src);
	printf("Cópia:     %s\n", dest);

	return (0);
}