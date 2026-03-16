/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:08:07 by rarevalo          #+#    #+#             */
/*   Updated: 2026/03/11 21:11:20 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}

int	main(void)
{
	int	v_1;
	int	v_2;

	v_1 = 5;
	v_2 = 7;
	ft_ultimate_div_mod(&v_1, &v_2);
	printf("%d %d", v_1, v_2);
}