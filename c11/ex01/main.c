#include <stdio.h>

int	*ft_map(int *array, int length, int(*f)(int));

int	ft_power(int n)
{
	return (n*n);
}

int	main(void)
{
	int	tab[3] = {1, 2, 3};
	int	length = 3;

	int *rettab = ft_map(tab, length, &ft_power);
	while (length > 0)
	{
		printf("%d\n", *rettab);
		rettab++;
		length--;
	}
}
