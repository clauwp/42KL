#include <stdio.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*str;
	str = "hello \032\037\001\n";
	ft_putstr_non_printable(str);
	printf("\nprintf: %s", str);
}
