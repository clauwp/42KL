#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
	char *s = "-0JJJ --+";
	char *base = "ABCDEFGHIJ";
	int i =ft_atoi_base(s, base); 
	printf("string: %s\n", s);
	printf("base string: %s\n", base);
	printf("integer: %d\n", i);
}
