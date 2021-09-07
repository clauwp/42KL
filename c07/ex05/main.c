#include <stdio.h>

char    **ft_split(char *str, char *charset);

int main(void)
{
	char *str = "how are you";
	char	*charset = " ";
	char	**array_split = ft_split(str, charset);
	while (*array_split)
	{
		printf("%s\n", *array_split);
		array_split++;
	}
}
