#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main(void)
{
	int nb =90;
	int power = 0;
	int ans = ft_iterative_power(nb, power);
	printf("%d^%d = %d\n", nb, power, ans);
}
