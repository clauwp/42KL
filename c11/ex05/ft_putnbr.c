#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n / 10 != 0)
		ft_putnbr(n / 10);
	if (n > -10 && n < 0)
		write (1, "-", 1);
	if (n < 0)
		n = -(n % 10);
	else
		n = n % 10;
	c = n + '0';
	write (1, &c, 1);
}
