#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "hello";
	char	*src = "byebyebye";
	char	*printstr;

	printstr = ft_strcpy(dest, src);
	printf("returned string: %s\n", printstr);
	printf("dest string: %s\n", dest);
}
