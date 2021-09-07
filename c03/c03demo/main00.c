#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "hello world";
	char	*s2 = "hello worldx";

	int	result =ft_strcmp(s1, s2);

	printf("Result: %d\n", result);
}
