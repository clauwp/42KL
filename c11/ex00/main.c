#include <unistd.h>

void	ft_foreach(int *array, int length, void(*f)(int));

void	ft_putnbr(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[3] = {1, 2, 3};
	//int	length = 3;

	ft_foreach(tab, 8, &ft_putnbr);
}
