/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 15:51:08 by ffaria-v          #+#    #+#             */
/*   Updated: 2026/03/08 12:50:25 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_parse(char *str, char *clues)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i]!= '\0')
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
		{
			return (-1);
		}
		i++;

	}
	if( count != 16)
		return (-1);
	return (0);
}

