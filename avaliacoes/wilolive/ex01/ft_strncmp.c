/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilolive <wilolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:17:39 by wilolive          #+#    #+#             */
/*   Updated: 2026/03/09 11:37:00 by wilolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;
	int				diff;

	idx = 0;
	diff = 0;
	if (n == 0)
		return (diff);
	while (s1[idx] != '\0' && idx < n -1)
	{
		diff = s1[idx] - s2[idx];
		if (diff != 0)
			return (diff);
		idx++;
	}
	diff = s1[idx] - s2[idx];
	return (diff);
}
