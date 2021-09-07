#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*array;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *) malloc(sizeof(int) * size);
	if (array != NULL)
	{
		*range = array;
		while (min < max)
		{
			*array = min;
			min++;
			array++;
		}
		return (size);
	}
	*range = NULL;
	return (-1);
}
