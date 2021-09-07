#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	size = max - min;
	arr = (int *) malloc(sizeof(*arr) * size);
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
	}
	return (arr);
}
