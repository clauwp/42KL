#include <stdio.h>
#include <string.h>

int	ft_strncmp2(char *s1, char *s2, unsigned int i);

int	main(void)
{
	char	*s1 = "hellox world0123456789";
	char	*s2 = "he3lox world0123456789";
	int	arr[5] = {0,0,0,0,0};

	int	result =ft_strncmp2(s1, s2, 3);
	int result2 =strncmp(s1, s2, 3);
	printf("Actual Result: %d\n", result);
	printf("Target Result: %d\n", result2);
}
