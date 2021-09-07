#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	char*str = "hein+";

	int	i = ft_str_is_numeric(str);
	printf("result = %d\n", i);
}
