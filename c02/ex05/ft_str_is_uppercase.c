int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	index;

	i = 1;
	index =0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
		{
			i =0;
		}
		index++;
	}
	return (i);
}
