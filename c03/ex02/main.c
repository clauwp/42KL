#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest1[20] = "hello";
	char    dest2[20] = "hello";
	char	src[10] = "world";

	char	*correct =strcat(dest1, src);
	char	*returned =ft_strcat(dest2, src);

	printf("target string: %s\n", correct);
	printf("actual string: %s\n", returned);
	//printf("actual & returned str is equal: %d\n", correct[10] ==returned[10]);
}
