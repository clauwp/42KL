#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest1[20] = "hello";
	char    dest2[20] = "hello";
	char	src[10] = "world !!!";

	char*correct =strncat(dest1, src, 5 );
	char*returned =ft_strncat(dest2, src, 5);

	printf("target string: %s\n", correct);
	printf("actual string: %s\n", returned);
	printf("dest1 string: %s\n", dest1);
	printf("dest2 string: %s\n", dest2);
	printf("last char of actual & returned str is equal: %d\nthat is %d\n", correct[14] ==returned[14], returned[14]);
}
