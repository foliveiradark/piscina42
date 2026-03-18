/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffaria-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 15:51:08 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/07 16:19:21 by ffaria-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_parse(char *str, char *clues)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			clues[count] = str[i];
			count++;
		}
		else if (str[i] == ' ')
		{
		}
		else
			return (-1);
	}
	if (count != 16)
		return (-1);
	return (0);
}
