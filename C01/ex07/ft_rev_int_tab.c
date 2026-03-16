/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:47:54 by flavio            #+#    #+#             */
/*   Updated: 2026/03/16 15:22:45 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	*start;
	int	*end;

	start = tab;
	end = tab + size -1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

/* int	main(void)
{
	int tab [8] = {1, 2, 3, 4, 5, 6, 7, 8 };
	int i = 0;
	int *p;

	p = tab;
	printf("Lista original = ");
	while (p < tab + 8)
	{
		printf("%d", *p);
		p++;
	}
	printf("\n");
	
	ft_rev_int_tab(tab, 8);
	printf("Lista invertida = ");
	while (i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
} */