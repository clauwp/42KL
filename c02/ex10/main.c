#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	n;
	char	*str;
	char	dest[10]= "hello";
	char	dest1[10]= "hello";

	str = " hello";
	n = 0;

	unsigned int	i=ft_strlcpy(dest, str, n);
	unsigned int    j=strlcpy(dest1, str, n);
	printf("target result: %s\n", dest);
	printf("actual result: %s\n", dest1);
	printf("target val = %d\n", i);
	printf("actual val = %d\n", j);
}
