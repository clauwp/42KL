#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int	n;
	char	*str;
	char	dst[3]="h";
	char	*dest = dst;

	str = "nihao+-*7438";
	n = 5;
	char	*returnstr =ft_strncpy(dest, str, n);
	printf("returned string: %s\ndest string: %s\nsrc string: %s\n", returnstr,dest, str);
}
