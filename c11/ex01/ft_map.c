#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*rettab;

	i = 0;
	rettab = (int *)malloc(sizeof(int) * length);
	if (rettab != NULL)
	{
		while (i < length)
		{
			rettab[i] = (*f)(tab[i]);
			i++;
		}
	}
	return (rettab);
}
