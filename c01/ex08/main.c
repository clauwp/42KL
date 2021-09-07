#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {-10,11,0,33,2};
	int	*tab_ptr;
	int	count =0;

	tab_ptr =tab;
	ft_sort_int_tab(tab_ptr, 5);
	while (count < 5)
	{
		printf("%d, ",tab[count]);
		count++;
	}
}
