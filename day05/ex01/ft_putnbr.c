#include <unistd.h>

int	ft_putchar(char c);

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
