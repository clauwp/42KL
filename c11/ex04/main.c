#include <stdio.h>
#include <string.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_nbrcmp(int n, int m)
{
	if (n > m)
		return (1);
	if (n < m)
		return (-1);
	return (0);
}

int	main(void)
{
	int	sorted;
	int array[10] = {6, 5, 5, 2, 5, 5};

	sorted = ft_is_sort(array, 1, &ft_nbrcmp);
	printf("sorted? %d\n", sorted);
}

