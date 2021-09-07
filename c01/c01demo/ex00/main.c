#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*ptr;
	
	ptr = &a;
	ft_ft(ptr);
	printf("a = %d\n", a);
	return (0);
}
