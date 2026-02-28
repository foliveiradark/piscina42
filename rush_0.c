#include <unistd.h>

void ft_putchar(char abobra)
{
    write(1, &abobra, 1);
}

void rush(int largura, int altura)
{
    int n = 0;
    int quebra_de_linha = largura + 1;
    int total = quebra_de_linha * altura;

    while(n < total)
    {
        //CANTOS
        if(n <= largura && n % quebra_de_linha == 1)
        	ft_putchar('A');
		else if (n <= largura && n % quebra_de_linha == largura)
			ft_putchar('B');
		else if (n >= total - quebra_de_linha && n % quebra_de_linha == 1)
			ft_putchar('C');
		else if(n >= total - quebra_de_linha && n % quebra_de_linha == largura)
			ft_putchar('D');

        //QUEBRA DE LINHA
        else if(n % quebra_de_linha == 0)
            ft_putchar('\n');

        //PAREDES
        else if (n % quebra_de_linha == 1)
			ft_putchar('[');
        else if (n % quebra_de_linha == largura)
            ft_putchar(']');

        //CHAO E TETO
        else if (n <= largura)
            ft_putchar('+');
        else if (n >= total - quebra_de_linha)
            ft_putchar('=');

        //medo eterno de todas as verdades
        else
            ft_putchar('*');
        n++;
    }
}

int main(void)
{
    rush(4, 15);
	rush(10, 5);
	rush(10, 5);
}
