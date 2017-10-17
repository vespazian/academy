#include <unistd.h>

int	ft_putchar(char c);

void	ft_putnbr (int nbr)
{
	int auxiliar;

	if (nbr > 10)
	{
		auxiliar = nbr % 10;
		nbr = nbr / 10;
		ft_putchar(auxiliar +'0');
		ft_putnbr (nbr);
	}
	else
	{
		ft_putchar(nbr + '0');
	}

}
