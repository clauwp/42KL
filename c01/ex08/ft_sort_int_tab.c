void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	min_index;
	int	*min_index_ptr;

	min_index =0;
	min_index_ptr = tab;
	while (min_index < size)
	{
		counter = min_index +1;
		min_index_ptr = tab + min_index;
		while (counter < size)
		{
			if (tab[counter] < *min_index_ptr)
			{
				ft_swap(min_index_ptr, (tab + counter));
			}
			counter++;
		}
		min_index++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
