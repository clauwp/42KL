#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str ="girigrnl";

	int	i =ft_str_is_lowercase(str);
	printf("string: %s\nresult: %d\n", str, i);
}
