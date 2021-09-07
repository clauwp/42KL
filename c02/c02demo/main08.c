#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char s[] = "heLLo WoRld 78^!$";
	printf("ori string before running function: %s\n", s);
	char	*pr =ft_strlowcase(s);
	printf("ori string after running function: %s\n", s);
	printf("returned string: %s\n", pr);
}
