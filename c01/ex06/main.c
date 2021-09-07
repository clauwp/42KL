#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int	count;

	str = "hello world";
	count =ft_strlen(str);
	printf("num of char = %d\n", count);
}
