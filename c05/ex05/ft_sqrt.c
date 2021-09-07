#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	sqrt;

	sqrt = nb /2;
	while (sqrt > 0 && (sqrt *sqrt > nb))
	{
		sqrt = sqrt / 2;
	}
	while (sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
