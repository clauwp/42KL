#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char	*c;
	
	c = "hello	";
	int	i = ft_str_is_printable(c);
	printf("string: %s\nresult: %d\n", c, i);
}
