/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:14:38 by lfurtado          #+#    #+#             */
/*   Updated: 2026/03/17 16:36:23 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, int n)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	go_to[50] = "Linguagem ";
	char	go_cmp[] = "C e incrivel!";
	int	n = 2;

	ft_strcat(go_to, go_cmp, n);
	printf("%s\n", go_to);
	return (0);
}

