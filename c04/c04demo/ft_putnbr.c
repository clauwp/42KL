#include <unistd.h>

void	ft_digitchar(int n);

void	ft_putnbr(int nb)
{
	if (nb /10 != 0)
	{
		ft_putnbr(nb /10);
	}
	if (nb <0 && nb > -10)
	{
		write(1, "-", 1);
	}
	if (nb %10 < 0)
	{
		ft_digitchar(-(nb %10));
	}
	else
	{
		ft_digitchar(nb %10);
	}
}

void	ft_digitchar(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

