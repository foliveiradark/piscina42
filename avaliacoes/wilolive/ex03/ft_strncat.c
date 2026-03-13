/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilolive <wilolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:57:52 by wilolive          #+#    #+#             */
/*   Updated: 2026/03/09 12:07:25 by wilolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d_idx;
	unsigned int	s_idx;

	d_idx = ft_strlen(dest);
	s_idx = 0;
	while (src[s_idx] != '\0' && s_idx < nb)
	{
		dest[d_idx] = src[s_idx];
		d_idx++;
		s_idx++;
	}
	dest[d_idx] = '\0';
	return (dest);
}
