#include <stdio.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*str;
	str = "Coucou\ntu vas bien hi\001\03\027\023!\026\040\012\013\020 ?";
	ft_putstr_non_printable(str);
	printf("\nprintf: %s", str);
}
