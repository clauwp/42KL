#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str = "_)(&^%#**";

	int	i = ft_str_is_alpha(str);
	printf("result = %d\n", i);
}
