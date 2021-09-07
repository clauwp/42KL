#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	n;
	char	*str;
	char	dest[9]= "hi there.";
	char	dest1[9]= "hi there ";
	str = "hello world";
	n = 9;

	unsigned int	i=strlcat(dest, str, n);
	unsigned int    j=ft_strlcat(dest1, str, n);
	printf("target result: %s\n", dest);
	printf("actual result: %s\n", dest1);
}
