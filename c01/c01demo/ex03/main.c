#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div_ptr;
	int	*mod_ptr;
	int	div;
	int	mod;

	a = 67;
	b = 10;
	div_ptr = &div;
	mod_ptr = &mod;

	ft_div_mod(a, b, div_ptr, mod_ptr);
	printf("div = %d, mod = %d\n", div, mod);
}
