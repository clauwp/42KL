#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	n;
	char	*str;
	char	dest[3]="h";

	str = "nihao";
	n = 2;
	printf("dest string: %s\nsrc string: %s\n length to copy: %d\n", dest, str, n);
	unsigned int	i=ft_strlcpy(dest, str, n);
	printf("returned integer: %d\ndest string: %s\nsrc string: %s\n", i, dest, str);
}
