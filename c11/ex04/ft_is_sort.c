int	ascending(int *tab, int length, int(*f)(int, int));
int	descending(int *tab, int length, int(*f)(int, int));

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	asc;
	int	desc;

	if (length <= 0)
		return (1);
	asc = ascending(tab, length, f);
	desc = descending(tab, length, f);
	if (asc == length)
		return (1);
	if (desc == length)
		return (1);
	return (0);
}

int	ascending(int *tab, int length, int(*f)(int, int))
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (length > 1)
	{
		if ((*f)(tab[i], tab[i +1]) <= 0)
			count++;
		i++;
		length--;
	}
	return (count);
}

int	descending(int *tab, int length, int(*f)(int, int))
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (length > 1)
	{
		if ((*f)(tab[i], tab[i +1]) >= 0)
			count++;
		i++;
		length--;
	}
	return (count);
}
