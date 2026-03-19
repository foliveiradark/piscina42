/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:47:20 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/18 18:19:25 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 3)); // 0
	printf("%d\n", ft_strncmp("abc", "abd", 3)); // negativo
	printf("%d\n", ft_strncmp("abc", "abd", 2)); // 0
	printf("%d\n", ft_strncmp("abc", "ab", 3));  // positivo
	printf("%d\n", ft_strncmp("ab", "abc", 3));  // negativo
	printf("%d\n", ft_strncmp("abc", "xyz", 0)); // 0
} */
