void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;

	count =0;
	while (count < (size /2))
	{
		ft_swap((tab + count), (tab + size -1 -count));
		count++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
