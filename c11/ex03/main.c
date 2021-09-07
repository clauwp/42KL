#include <stdio.h>

int     ft_count_if(char **tab,int length, int (*f)(char *));

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
	char *strs[] = {"hell", "boye",0};

	int returnval = ft_count_if(strs, 2, ft_find_h);
	printf("ret val = %d\n", returnval);
}

