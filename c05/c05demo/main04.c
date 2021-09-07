#include <stdio.h>

int ft_fibonacci(int index);

int main(void)
{
	int index = 10;
	int i=0;
	while (i <=index)
	{
		if (i == index)
		{
			printf("%d\n", ft_fibonacci(index));
		}
		else
		{
			printf("%d, ", ft_fibonacci(i));
		}
		i++;
	}
}
