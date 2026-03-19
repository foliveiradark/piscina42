/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 09:54:11 by flavio            #+#    #+#             */
/*   Updated: 2026/03/16 20:27:15 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char src[] = "Hello Pisciner";
	char dest[20] = {0};
	
	printf("antes de rodar a função:\n");
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	
	ft_strncpy(dest, src, 5);

	printf("após rodar a função:\n");
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
} */
