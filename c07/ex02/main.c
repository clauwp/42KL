#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int	min = -2147483648;
	int max = -1;
	int *range[] ={NULL};
	int size = ft_ultimate_range(range, min, max);
	
	printf("tab=%p\n", *range);
	printf("len=%d\n", size);
}
