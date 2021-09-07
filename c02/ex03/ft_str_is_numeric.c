int	ft_str_is_numeric(char *str)
{
	int	i;
	int	index;

	i = 1;
	index =0;
	while (str[index] != 0)
	{
		if (str[index] < '0' || str[index] > '9')
		{
			i =0;
		}
		index++;
	}
	return (i);
}
