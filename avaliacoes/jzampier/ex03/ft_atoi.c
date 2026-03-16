/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:04:27 by jzampier          #+#    #+#             */
/*   Updated: 2026/03/12 21:04:27 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c);
int	allowed_chars(char c, int *num);
int	ft_atoi(char *str);
int	is_space(char c);

int	is_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	allowed_chars(char c, int *num)
{
	if (is_number(c))
		return (1);
	if ((c == '+' || c == '-' || is_space(c)) && *num == 0)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;
	int	temp;

	sign = 1;
	num = 0;
	while (*str != '\0')
	{
		if (!allowed_chars(*str, &num))
			break ;
		if (*str == '-')
			sign *= -1;
		if (is_number(*str))
		{
			temp = *str - '0';
			num = num * 10 + temp;
		}
		str++;
	}
	return (num * sign);
}

#include <stdio.h>
int main(void)
{
	char *str = {"42 4 5 6 7 8 9 0 a b c d e f g h i j k	l m n o p q r s t u v w x y z"};
	printf("\n\noutput: %d", ft_atoi(str));
}
