#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	
	a =99;
	b =-11;
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
