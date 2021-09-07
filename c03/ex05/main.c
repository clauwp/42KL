#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	n;
	char	*str;
	char	dest[15]= "hi there ";
	char	dest1[15]= "hi there ";
	str = "hello world";
	n = 15;

	unsigned int	i=strlcat(dest, str, n);
	unsigned int    j=ft_strlcat(dest1, str, n);
	printf("target result: %s\ntarget returned value: %d\n", dest, i);
	printf("actual result: %s\nactual returned value: %d\n", dest1, j);
}
