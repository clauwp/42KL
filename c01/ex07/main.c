#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {0,1,2,3,4};
	int	*ptr;
	int	count;

	count =0;
	ptr = tab;
	ft_rev_int_tab(ptr, 5);
	while (count < 5)
	{
		printf("%d",tab[count]);
		count++;
	}
}
