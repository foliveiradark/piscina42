/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 00:37:10 by rarevalo          #+#    #+#             */
/*   Updated: 2026/03/11 21:07:45 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	result_div;
	int	result_mod;

	a = 2;
	b = 7;

	ft_div_mod(a, b, &result_div, &result_mod);

	printf(" %d %d", a, b);
	printf(" %d %d", result_div, result_mod);
}
