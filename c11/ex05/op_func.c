#include <unistd.h>

void	ft_putnbr(int n);

void	add(int i, int j)
{
	ft_putnbr(i + j);
}

void	subtract(int i, int j)
{
	ft_putnbr(i - j);
}

void	multiply(int i, int j)
{
	ft_putnbr(i * j);
}

void	divide(int i, int j)
{
	if (j == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(i / j);
}

void	modulo(int i, int j)
{
	if (j == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(i % j);
}
