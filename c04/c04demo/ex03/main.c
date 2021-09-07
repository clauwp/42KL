#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	char *s ="\t\r\n--  9038-+";
	printf("string: %s\n", s);
	printf("%d\n", ft_atoi(s));
}
