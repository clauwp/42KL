#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	//int	range_man[10] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	int	*range = ft_range(1, 100);
	while (*range != 0)
	{
		printf("%d, ", *range);
		range++;
	}
}
