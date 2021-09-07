#include <stdio.h>

char	*ft_strdup(char *src);

int main(void)
{
	char	*src = "hello world! bye";
	char	*copy_s = ft_strdup(src);
	printf("Copied string: %s\n", copy_s);
}
