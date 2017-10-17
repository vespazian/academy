#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	int index;
	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	return 0;
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		ft_putchar('-');
	}

	int aux = nbr;
	int zeci = 1;
	while (aux > 10)
	{
		aux = aux /10;
		zeci = zeci * 10;
	}
	nbr = nbr - aux * zeci;
	ft_putchar(aux+'0');
	if (nbr > 10)
	{
		ft_putnbr(nbr);
	}
	else 
	{
		ft_putchar(nbr+'0');
	}


}
int main()
{
	int index = 0;
	char *str = "John";
	ft_putstr(str);
	ft_putchar('\n');
	ft_putnbr(-12345678);
	ft_putchar('\n');
}

