#include <stdio.h>

void ft_sort_string_tab(char **tab);

int	main(void)
{
	int	i = 0;
	char	*strs[] = {"I'm", "hot", "and", "I'm", "cold", 0};
	//char	*strs2[] = {"9", 0};
	ft_sort_string_tab(strs);
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}
