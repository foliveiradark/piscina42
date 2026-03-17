/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:47:54 by flavio            #+#    #+#             */
/*   Updated: 2026/03/17 17:58:54 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	temp = 0;
	while (index < (size / 2)) 
	{
		temp = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = temp;
		index++;
	}
}

/* void	print_tab(int *tab, int size)
{
	int	i = 0;

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
} */

/* int	main(void)
{
	int tab1[5] = {1, 2, 3, 4, 5};
	printf("Teste 1 (normal):\n");
	print_tab(tab1, 5);
	ft_rev_int_tab(tab1, 5);
	print_tab(tab1, 5);
	
	int tab2[5] = {1, 2, 3, 4, 5};
	printf("\nTeste 2 (size errado):\n");
	ft_rev_int_tab(tab2, 10);
	print_tab(tab2, 10);
	
	printf("\nTeste 3 (NULL):\n");
	ft_rev_int_tab(NULL, 5);

	int tab4[3] = {1, 2, 3};
	printf("\nTeste 4 (size = 0):\n");
	ft_rev_int_tab(tab4, 0);
	print_tab(tab4, 3);

	int tab5[1] = {42};
	printf("\nTeste 5 (size = 1):\n");
	print_tab(tab5, 1);
	ft_rev_int_tab(tab5, 1);
	print_tab(tab5, 1);
	

	return (0);
} 
 */

/* int	main(void)
{
	int tab [8] = {1, 2, 3, 4, 5, 6, 7, 8};
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