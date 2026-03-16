/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 10:55:48 by lbalderr          #+#    #+#             */
/*   Updated: 2026/03/11 18:57:46 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	to_fill;
	unsigned int	dest_len;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	dest_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	if (size == dest_len)
		return (size + src_len);
	to_fill = size - dest_len - 1;
	i = 0;
	while (src[i] != '\0' && i < to_fill)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
int main()
{
    char			dest_1[20] = "Hello";
    char			dest_2[20] = "Hello";
    char			dest_3[20] = "Hello";
    char			dest_4[20] = "Hello";
    char			src[] = " World!";
    unsigned int	size;

    // TEST 1: Normal Concatenation
    size = 20;
    printf("Test 1 (Normal):   Result: %u", ft_strlcat(dest_1, src, size));
    printf(" | Dest: '%s'", dest_1);
    printf(" (Expected: 12, 'Hello World!')\n");

    // TEST 2: Truncation (Buffer too small)
    size = 10; // Only room for "Hello Wor" + '\0'
    printf("Test 2 (Truncate): Result: %u", ft_strlcat(dest_2, src, size));
    printf(" | Dest: '%s'", dest_2);
    printf(" (Expected: 12, 'Hello Wor')\n");

    // TEST 3: Size equals dest_len (No room to append)
    size = 5; 
    printf("Test 3 (Full):     Result: %u", ft_strlcat(dest_3, src, size));
    printf(" | Dest: '%s'", dest_3);
    printf(" (Expected: 12, 'Hello')\n");

    // TEST 4: Size is 0
    size = 0;
    printf("Test 4 (Size 0):   Result: %u", ft_strlcat(dest_4, src, size));
    printf(" | Dest: '%s'", dest_4);
    printf(" (Expected: 7, 'Hello')\n");

    return (0);
}
