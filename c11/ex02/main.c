#include <stdio.h>

int     ft_any(char **tab, int (*f)(char *));

int	ft_find_h(char *str)
{
	while (*str)
	{
		if (*str == 'h')
			return (1);
		else if (*str == 'o')
			return (-1);
		str++;
	}
	return (0);
}

int main(void)
{
	char *strs[] = {"ell", "bye",0};

	int returnval = ft_any(strs, ft_find_h);
	printf("ret val = %d\n", returnval);
}

