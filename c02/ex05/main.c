#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char*str ="OINBKLFN";
	int	i =ft_str_is_uppercase(str);
	printf("string: %s\nresult: %d\n", str, i);
}
