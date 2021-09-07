#include <stdio.h>

int	ft_is_prime(int nb);

int main(void)
{
	printf("Number: 0, result: %d\n", ft_is_prime(1));
	printf("Number: 81, result: %d\n", ft_is_prime(-81));
	printf("Number: 5, result: %d\n", ft_is_prime(5));
	printf("Number: 17177171, result: %d\n", ft_is_prime(17177171));
	printf("Number: 2147483647, result: %d\n", ft_is_prime(2147483647));
	printf("Number: 7919, result: %d\n", ft_is_prime(7919));
}
