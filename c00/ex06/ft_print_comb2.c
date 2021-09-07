#include <unistd.h>

void	ft_print_comb2(void);
void	printnum(int i);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			if (b > a)
			{
				printnum(a);
				write(1, " ", 1);
				printnum(b);
				if (!(a == 98 && b == 99))
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		b = a +1;
		a++;
	}
}

void	printnum(int i)
{
	char	a1;
	char	a2;
	int		i1;
	int		i2;

	if (i < 10)
	{
		i1 = 0;
		i2 = i;
	}
	else
	{
		i1 = i /10;
		i2 = i %10;
	}
	a1 = i1 + '0';
	a2 = i2 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
}
