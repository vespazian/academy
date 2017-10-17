#include <unistd.h>

int	ft_putchar(char c);

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
