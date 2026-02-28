#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int height, int width)
{
	int	n;
	int	width_new_line;
	int	total;

	n = 1;
	width_new_line = width + 1;
	total = width_new_line * height;
	while (n < total)
	{
		if (n == 1)
			ft_putchar('A');
		else if (n == width)
			ft_putchar('C');
		else if (n >= total - width_new_line && n % width_new_line == 1)
			ft_putchar('A');
		else if (n >= total - width_new_line && n % width_new_line == width)
			ft_putchar('C');
		else if(n % width_new_line == 0)
			ft_putchar('\n');
		else if(n % width_new_line == 1)
			ft_putchar('B');
		else if (n % width_new_line == width)
			ft_putchar('B');
		else if (n <= width)
			ft_putchar('B');
		else if(n >= total - width_new_line)
			ft_putchar('B');
		else
			ft_putchar(' ');
		n++;
	}
}

int	main(void)
{
    rush(4, 2);
}
