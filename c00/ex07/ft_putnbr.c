#include <unistd.h>

void	ft_putnbr(int nb);
char	converter(int a);
int		negToPos(int i);

int	negToPos(int i)
{
	if (i == -2147483648)
	{
		write(1, "-2", 2);
		i = -i - 2000000000;
	}
	else if (i == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		write(1, "-", 1);
		i = -i;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int		rem;
	int		counter;
	char	ch;

	counter = 0;
	if (nb <= 0)
	{
		nb = negToPos(nb);
	}
	while (nb > 0)
	{
		rem = nb % 10;
		arr[counter] = rem;
		nb = nb / 10;
		counter++;
	}
	while (counter > 0)
	{
		ch = converter(arr[counter -1]);
		write(1, &ch, 1);
		counter--;
	}
}

char	converter(int a)
{
	char	ch;

	ch = a +'0';
	return (ch);
}
