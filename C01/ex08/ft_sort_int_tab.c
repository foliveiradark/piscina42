/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavio <flavio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:40:10 by flavio            #+#    #+#             */
/*   Updated: 2026/03/14 17:08:30 by flavio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while(i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int tab[9] = {8, 4, 2, 9, 5, 6, 1, 3, 7};
	int i = 0;
	int *p;
	
	printf("Lista original = ");
	
	p = tab;
	while (p < tab + 9)
	{
		printf("%d", *p);
		p++;
	}
	printf("\n");
	
	ft_sort_int_tab(tab, 9);
	
	printf("Lista ordenada = ");
	while (i < 9)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}
