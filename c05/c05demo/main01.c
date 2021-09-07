#include <stdio.h>

 int ft_recursive_factorial(int nb);

 int main(void)
{
	int n = -1;
	int i = ft_recursive_factorial(n);
	printf("%d! = %d\n", n, i); 
}
