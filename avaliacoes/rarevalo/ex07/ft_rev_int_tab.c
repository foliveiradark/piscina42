/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarevalo <rarevalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:45:34 by rarevalo          #+#    #+#             */
/*   Updated: 2026/03/11 19:30:17 by rarevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

/*int main(void)
{
	int	size;
	int	v_q[4];

	v_q[0] = 1;
	v_q[1] = 2;
	v_q[2] = 3;
	v_q[3] = 4;
	size = 4;
	ft_rev_int_tab(&v_q, size);
	return (0);
}*/
