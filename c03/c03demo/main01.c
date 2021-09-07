#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int i);

int	main(void)
{
	char	*s1 = "hello world";
	char	*s2 = "hello world";

	int	result =ft_strncmp(s1, s2, 15);
	printf("Result: %d\n", result);
}
