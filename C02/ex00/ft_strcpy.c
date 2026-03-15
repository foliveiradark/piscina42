/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:18:31 by flavio            #+#    #+#             */
/*   Updated: 2026/03/15 09:29:30 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

/* char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while ((dest[i] = src[i]))
		i++;
	return(dest);
}
 */
int	main(void)
{
	char src[] = "Piscina 42";
	char dest[20] = {0};
	
	printf("Antes de rodar a função: \n");
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);

	ft_strcpy(dest, src);
	
	printf("Após rodar a função: \n");
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
}
