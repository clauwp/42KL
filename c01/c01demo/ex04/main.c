#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 817;
	b = 10;
	ptr_a = &a;
	ptr_b = &b;

	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("a = %d, b = %d\n", a, b);
}
