/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabuleiro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcampos- <fcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 15:55:25 by fcampos-          #+#    #+#             */
/*   Updated: 2026/03/07 18:03:53 by fcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

int grid[SIZE][SIZE];

void    init_grid(int grid[4][4])
{
    int row;
    int col;

    row =0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            grid[row][col] = 0;
            col++;
        }
        row++;
    }
}

#include<unistd.h>

void    print_grid(int grid[4][4])
{
    int row;
    int col;
    char    c;
    
    row = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            c = grid[row][col] + '0';
            write(1, &c, 1);
            if (col <3)
                write(1, " ", 1);
            col++;
        }
        write(1, "\n", 1);
        row++;
    }
}

int main(void)
{
    print_grid('0');
    return (0);
}