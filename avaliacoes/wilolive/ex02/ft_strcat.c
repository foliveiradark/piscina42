/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:43:12 by wilolive          #+#    #+#             */
/*   Updated: 2026/03/11 18:33:25 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d_idx;
	int	s_idx;

	d_idx = ft_strlen(dest);
	s_idx = 0;
	while (src[s_idx] != '\0')
	{
		dest[d_idx] = src[s_idx];
		d_idx++;
		s_idx++;
	}
	dest[d_idx] = '\0';
	return (dest);
}
